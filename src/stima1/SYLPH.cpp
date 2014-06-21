// SYLPH.cpp
// Mk. 26

#include "SYLPH.h"
#include "Graf.h"
#include "Player.h"
#include "Rogue.h"
#include "constants.h"
using namespace std;
int SYLPH (Graf G, Player P, int pos)
                            {
    /* Deklarasi */
    double* rasio;
	int* harta;
	int** matrix;
	int i, max;
	double maxval;
    /* Inisialisasi */
    rasio = new double[G.GetJumlahSimpul()];
	harta = new int[G.GetJumlahSimpul()];
	for(i=0;i<G.GetJumlahSimpul();i++) {
		harta[i] = G.GetArrPosPeti()[i];
	}
	matrix = G.GetMatrixJarakSimpul();
	/* Langkah 0 */
	for(i=0;i<G.GetJumlahSimpul();i++){
		switch(harta[i])
		{
			case 1: harta[i] = SOLAR_RED; break;
			case 2: harta[i] = SOLAR_YELLOW; break;
			case 3: harta[i] = SOLAR_GREEN; break;
			default: break;
		}
	}
    /* Langkah 1 */
    for(i=0;i<G.GetJumlahSimpul();i++){
		if(i != pos) rasio[i] = (double)harta[i] / matrix[pos][i];
	}
    /* Langkah 2 */
	maxval = -99;
    for (i=0;i<G.GetJumlahSimpul();i++) {
        if ((rasio[i] <= 0) || (i == pos)) continue;
		else if(rasio[i] >= maxval){
			maxval = rasio[i];
			max = i;
		}
    }
	
	/* Langkah 3 (opsional) */
	
	if(maxval == -99){ //semua peti di sekitar kosong
		i=0;
		while((rasio[i]<0) || (i == pos) || (matrix[pos][i] < 0))
		{
			i++;
		}
		max = i;
	}
	
	/* Just in case */
	/*for (i=0;i<G.GetJumlahSimpul();i++) {
        cout << rasio[i] << endl;
    }
	*/
    /* Cleanup */
    delete [] rasio;
	delete [] harta;
	
    return max; //max adalah tujuan rute
}