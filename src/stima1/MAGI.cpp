
#include "MAGI.h"
#include "constants.h"
#include "Graf.h"
#include "Player.h"

#include <iostream>
using namespace std;

int MAGI(Graf G, Player P, int TimeLeft){
    int n = G.GetJumlahSimpul();
    int* ArrayJarak;
    ArrayJarak = new int[n];
    for (int i=0;i<n;i++) {
        ArrayJarak[i] = G.GetMatrixJarakSimpul()[P.GetCurrentPos()][i];
    }
	for (int i = 0; i < n; i++) {
		cout << ArrayJarak[i] << " ";
	}
	cout << endl;

    int* Kandidat;
    Kandidat = Melchior(G,P, ArrayJarak);
    
	for (int i = 0; i < n; i++) {
		cout << Kandidat[i] << " ";
	}
	cout << endl;

    int i = 0;
    bool stop= false;
	bool lock = false;
    int MAGIDECISION = Kandidat[0];
    int min = ArrayJarak[Kandidat[0]];
    while ((i < n) && !stop) {
		cout << "MELCHIOR proposes : " << Kandidat[i] << endl;
        bool M2,M3;        
        M2 = Balthazar(ArrayJarak, Kandidat[i], TimeLeft);
        if (M2) {
			cout << "BALTHAZAR ACCEPTS" << endl;
            if (ArrayJarak[Kandidat[i]] < min && ArrayJarak[Kandidat[i]] != -99 && !lock && P.GetCurrentPos() != Kandidat[i]) {
                MAGIDECISION = Kandidat[i];
                min = ArrayJarak[Kandidat[i]];
				lock = true;
				cout << "MIN = " << min << endl;
            }
            M3 = Casper(G, P, TimeLeft, ArrayJarak, Kandidat[i]);
            if (M3) {
                MAGIDECISION = Kandidat[i];
                stop = true;
				cout << "CASPER ACCEPTS" << endl;
            }
			else {
				i++;
				cout << "CASPER REJECTS" << endl;
			}
        } else {
			cout << "BALTHAZAR REJECTS" << endl;
            i++;
        }
    }
    /* Cleanup code */
    delete[] ArrayJarak;
    return MAGIDECISION;
}

int* Melchior(Graf G, Player P, int* ArrayJarak) {
    int n = G.GetJumlahSimpul();    
    double* rasio;
    int* posisi;
    rasio = new double[n];
    posisi = new int[n];
    for (int i = 0; i < n; i++) {
        posisi[i] = i;
        if(ArrayJarak[i] == 0) {
            if(G.GetPetiPosKe(i) == 0) rasio[i] = -99;
			else  {
				if (P.GetNDrill() == 0 && P.GetNRailgun() == 0 && P.GetNLaser() == 0) rasio[i] = -99;
				else rasio[i] = 999; //prioritas
			}
        }
        else if (ArrayJarak[i] == -99) rasio[i] = -99;
        else {
            int x;
            if (G.GetPetiPosKe(i) == 0) x = 0;
            else if(G.GetPetiPosKe(i) == MERAH){ x = SOLAR_RED;}
            else if (G.GetPetiPosKe(i) == KUNING){ x = SOLAR_YELLOW;}
            else if (G.GetPetiPosKe(i)== HIJAU){ x = SOLAR_GREEN;}
                rasio[i] = (double) x/ArrayJarak[i];
        }
    }
    int i,j;
    double temp;
    int tempos;
    for(i=0;i<n;i++) {
        for ( j = 0;j< n-1;j++) {
            if((rasio[j]) < rasio[j+1]) {
                temp = rasio[j+1];
                rasio[j+1] = rasio[j];
                rasio[j] = temp;
                tempos = posisi[j+1];
                posisi[j+1] = posisi[j];
                posisi[j] = tempos;
            }
        }
    }
    /* Cleanup */

	for (int i = 0; i < n; i++) {
		cout << rasio[i] << " ";
	}
	cout << endl;

    delete[] rasio;   
    return posisi;
}

bool Balthazar (int* ArrayJarak, int Simpul, int TimeLeft) {
    int a;
    if(ArrayJarak[Simpul] == -99) return false;
    else if (ArrayJarak[Simpul] == 0) return false;
    else {
        a = TimeLeft - ArrayJarak[Simpul];
        return (a >= 0); 
    }            
}

bool Casper(Graf G, Player P, int TimeLeft, int* ArrayJarak, int Simpul) {
    int val;
    if (G.IsKosong(G.GetPetiPosKe(Simpul)) && (Simpul != P.GetCurrentPos())) return true;
    else if (G.IsMerah(G.GetPetiPosKe(Simpul)) && (P.GetNRailgun() >= 1)) {
        val = TIME_RED;
    }
    else if (G.IsKuning(G.GetPetiPosKe(Simpul)) && (P.GetNRailgun() >= 1)){
        val = TIME_RED;
    }
    else if (G.IsKuning(G.GetPetiPosKe(Simpul)) && (P.GetNLaser() >= 1)){
        val = TIME_YELLOW;
    }
    else if (G.IsHijau(G.GetPetiPosKe(Simpul)) && (P.GetNRailgun() >= 1)){
        val = TIME_RED;
    }
    else if (G.IsHijau(G.GetPetiPosKe(Simpul)) && (P.GetNLaser() >= 1)){
        val = TIME_YELLOW;
    }  
    else if (G.IsHijau(G.GetPetiPosKe(Simpul)) && (P.GetNDrill() >= 1)){
        val = TIME_GREEN;
    }
    else return false;
    
    int a;
    a = TimeLeft - (ArrayJarak[Simpul]+val);
    if (a < 0) {
        return false;
    }
    
    
    return true;
}