
#include "Buy.h"
#include "Graf.h"
#include "Player.h"

void Buy(Graf G, Player &P){
    int Modal = P.GetPlatinum();
    int rem;
    int NRailgun = 0;int NLaser = 0; int NDrill = 0;
    NRailgun = Modal / RAILGUNPRICE; rem = Modal % RAILGUNPRICE;
    NLaser = rem / LASERPRICE; rem %= LASERPRICE;
    NDrill = rem;
    P.SetNRailgun(NRailgun);P.SetNLaser(NLaser);P.SetNDrill(NDrill);P.SetPlatinum(0);
}

void Buy2(Graf G, Player &P) {
    int NRailgun = 0;int NLaser = 0; int NDrill = 0;
    int n = G.GetNPetiMerah() + G.GetNPetiKuning() + G.GetNPetiHijau();
    int modal = P.GetPlatinum();
    int *simpulsort = new int[G.GetJumlahSimpul()];
    for (int i = 0; i < G.GetJumlahSimpul();i++) {
        simpulsort[i] = G.GetArrPosPeti()[i];
    }
    int temp, i;
    for (int j = 0; j < G.GetJumlahSimpul();j++) {
        temp = simpulsort[j];
        i = j;
        for(int k = j+1; k < G.GetJumlahSimpul();k++) {
            if (simpulsort[k] < simpulsort[j]) {
                simpulsort[j] = simpulsort[k];
                i = k;
            }
        }
        simpulsort[i] = temp;
    }
    for (int i = 0; i < n; i++) {
        if (simpulsort[i] == 1 && modal >= 3) {
            NRailgun++;modal-=3;
        }
        else if (simpulsort[i] == 2 && modal >= 2) {
            NLaser++;modal-=2;
        } 
        else if (simpulsort[i] == 3 && modal >= 1) {
            NDrill++;modal-=1;
        }
    }
    delete[] simpulsort;
    P.SetNRailgun(NRailgun);P.SetNLaser(NLaser);P.SetNDrill(NDrill);P.SetPlatinum(modal);   
}

void Buy3(Graf G, Player &P){
    int NRailgun = 0;int NLaser = 0; int NDrill = 0;    
    int n = G.GetNPetiMerah() + G.GetNPetiKuning() + G.GetNPetiHijau();
    int modal = P.GetPlatinum();
    int *simpulsort = new int[G.GetJumlahSimpul()];
    for (int i = 0; i < G.GetJumlahSimpul();i++) {
        simpulsort[i] = G.GetArrPosPeti()[i];
    }
    int temp, i;
    for (int j = 0; j < G.GetJumlahSimpul();j++) {
        temp = simpulsort[j];
        i = j;
        for(int k = j+1; k < G.GetJumlahSimpul();k++) {
            if (simpulsort[k] < simpulsort[j]) {
                simpulsort[j] = simpulsort[k];
                i = k;
            }
        }
        simpulsort[i] = temp;
    }
    for (int i = 0; i < n; i++) {
        if (simpulsort[i] == 1 && modal >= 3) {
            NRailgun++;modal-=3;
        }
        else if (simpulsort[i] == 2 && modal >= 3) {
            NRailgun++;modal-=3;
        }
        else if (simpulsort[i] == 2 && modal == 2) {
            NLaser++;modal-=2;
        }
        else if (simpulsort[i] == 3 && modal >= 3) {
            NRailgun++;modal-=3;
        }
        else if (simpulsort[i] == 3 && modal == 2) {
            NLaser++;modal-=2;
        }
        else if (simpulsort[i] == 3 && modal == 1) {
            NDrill++;modal-=1;
        }
    }
    delete[] simpulsort;
    P.SetNRailgun(NRailgun);P.SetNLaser(NLaser);P.SetNDrill(NDrill);P.SetPlatinum(modal);       
}