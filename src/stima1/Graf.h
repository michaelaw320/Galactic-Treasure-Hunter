
#ifndef GRAF_H
#define	GRAF_H

#include <string>

class Graf {
    public:
			Graf();
            ~Graf();
			bool Load(std::string filename);
            int GetModal();
            int GetNPetiMerah();
            int GetNPetiKuning();
            int GetNPetiHijau();
            int GetMinSkor();
            int GetWaktuPermainan();
            int GetJumlahSimpul();
            int* GetArrPosPeti(); 
            int GetPetiPosKe(int Berapa); 
            int GetPosPemain(); 
            int** GetMatrixJarakSimpul(); 
            int GetJarakSimpulKeKe(int Asal, int Tujuan); 
            bool IsMerah(int Pos);
            bool IsKuning(int Pos);
            bool IsHijau(int Pos);
            bool IsKosong(int Pos);
            void SetArrPosPeti(int Posisi, int Value);
            void SetArrPosPetiOpen(int Posisi);
            void Print();

            void TulisOutput(int Simpul, char Peti);
    private:
            int modal;
            int merah,kuning,hijau;
            int skor;
            int waktumain;
            int n;
            int *posisi; //array of posisi peti
            int pemain;
            int **jarak; // matrix dari jarak
            
};
#endif	/* GRAF_H */

