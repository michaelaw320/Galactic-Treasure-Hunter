
#include "Graf.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "constants.h"

using namespace std;

Graf::Graf() {
	std::cout << "CTOOOR" << std::endl;
	modal = 0; merah = 0; kuning = 0; hijau = 0; skor = 0; waktumain = 0; n = 0;
	jarak = new int*[0];
	jarak[0] = new int[0];
	posisi = new int[0];
}

bool Graf::Load(string filename) {
	int temp, mkh;
	int* tempos;
	char ch;
	string randomgiven, dummy;
	ifstream input;
	std::cout << filename << std::endl;
	input.open(filename.c_str());
	if (input.is_open()) {
		getline(input, dummy, ']');
		input >> modal;
		input >> randomgiven;
		getline(input, dummy, ']');
		input >> merah >> ch >> kuning >> ch >> hijau;
		mkh = merah + kuning + hijau;
		tempos = new int[mkh];
		/* Jika input [Given] */
		if (randomgiven == "[Given]") {
			int j = 0;
			for (int i = 0; i < merah; i++) {
				if (merah > 1 && i != merah - 1) input >> temp >> ch;
				else input >> temp;
				tempos[j] = temp - 1;
				j++;
			}
			for (int i = 0; i < kuning; i++) {
				if (kuning > 1 && i != kuning - 1) input >> temp >> ch;
				else input >> temp;
				tempos[j] = temp - 1;
				j++;
			}
			for (int i = 0; i < hijau; i++) {
				if (hijau > 1 && i != hijau - 1) input >> temp >> ch;
				else input >> temp;
				tempos[j] = temp - 1;
				j++;
			}
			input >> pemain;
			pemain--;
		}
		getline(input, dummy, ']');
		input >> skor;
		getline(input, dummy, ']');
		input >> waktumain;
		getline(input, dummy, ']');
		input >> n;
		getline(input, dummy, ']');
		jarak = new int*[n];
		for (int i = 0; i < n; i++) {
			jarak[i] = new int[n];
		}
		int j = 0;
		while (!input.eof() && j < n) {
			for (int i = 0; i < n; i++) {
				if (i != n - 1) input >> temp >> ch;
				else input >> temp;
				jarak[i][j] = temp;
			}
			j++;
		}
		posisi = new int[n];
		for (int i = 0; i < n; i++) posisi[i] = 0; //inisialisasi nilai
		/* Jika input [Random] */
		if (randomgiven == "[Random]") {
			int j = 0;
			for (int i = 0; i < merah; i++) {
				posisi[j] = MERAH; //1 berarti merah
				j++;
			}
			for (int i = 0; i < kuning; i++) {
				posisi[j] = KUNING; //2 berarti kuning
				j++;
			}
			for (int i = 0; i < hijau; i++) {
				posisi[j] = HIJAU; //3 berarti hijau
				j++;
			}
			/* Randomizer here */
			srand((unsigned int)time(NULL));
			for (int i = 0; i < n; i++) {
				j = rand() % n;
				temp = posisi[i]; posisi[i] = posisi[j]; posisi[j] = temp;
			}
			//Random posisi player
			srand((unsigned int)time(NULL));
			pemain = (rand() % n);
		} else { /* Menyelesaikan proses pemasukkan given diatas ke array posisi yang sebenarnya */
			int j = 0;
			for (int i = 0; i < merah; i++) {
				temp = tempos[j];
				posisi[temp] = MERAH; //1 berarti merah
				j++;
			}
			for (int i = 0; i < kuning; i++) {
				temp = tempos[j];
				posisi[temp] = KUNING; //2 berarti kuning
				j++;
			}
			for (int i = 0; i < hijau; i++) {
				temp = tempos[j];
				posisi[temp] = HIJAU; //3 berarti hijau
				j++;
			}
		}
		delete[] tempos;
		return true;
	} else {
		cout << "File gagal dibuka" << endl;
		std::cout << filename << std::endl;
		modal = 0; merah = 0; kuning = 0; hijau = 0; skor = 0; waktumain = 0; n = 0;
		jarak = new int*[0];
		jarak[0] = new int[0];
		posisi = new int[0];
		return false;
	}
	input.close();
	/*ofstream output;
	output.open("output.txt");
	if (output.is_open()) {
		output << "";
	} else cerr << "error" << endl;
	output.close();*/
}

Graf::~Graf() {
	/*for (int i = 0; i < n; ++i) {
		delete[] jarak[i];
	}
	delete[] jarak;
	delete[] posisi;*/
}

int Graf::GetModal() {
	return modal;
}
int Graf::GetNPetiMerah() {
	return merah;
}
int Graf::GetNPetiKuning() {
	return kuning;
}
int Graf::GetNPetiHijau() {
	return hijau;
}
int Graf::GetMinSkor() {
	return skor;
}
int Graf::GetWaktuPermainan() {
	return waktumain;
}
int Graf::GetJumlahSimpul() {
	return n;
}
int* Graf::GetArrPosPeti() {
	return posisi;
}
int Graf::GetPetiPosKe(int Berapa) {
	return posisi[Berapa];
}
int Graf::GetPosPemain() {
	return pemain;
}
int** Graf::GetMatrixJarakSimpul() {
	return jarak;
}
int Graf::GetJarakSimpulKeKe(int Asal, int Tujuan) {
	return jarak[Asal][Tujuan];
}
bool Graf::IsMerah(int Pos) {
	return (posisi[Pos] == 1);
}
bool Graf::IsKuning(int Pos) {
	return (posisi[Pos] == 2);
}
bool Graf::IsHijau(int Pos) {
	return (posisi[Pos] == 3);
}
bool Graf::IsKosong(int Pos) {
	return (posisi[Pos] == 0);
}
void Graf::Print() {
	cout << Graf::GetModal() << endl;
	cout << Graf::GetNPetiMerah() << ',' << Graf::GetNPetiKuning() << ',' << Graf::GetNPetiHijau() << endl;
	cout << Graf::GetMinSkor() << endl;
	cout << Graf::GetWaktuPermainan() << endl;
	cout << Graf::GetJumlahSimpul() << endl;
	for (int j = 0; j < Graf::GetJumlahSimpul(); j++) {
		for (int i = 0; i < Graf::GetJumlahSimpul(); i++) {
			if (i == Graf::GetJumlahSimpul() - 1) cout << Graf::GetMatrixJarakSimpul()[i][j];
			else cout << Graf::GetMatrixJarakSimpul()[i][j] << ',';
		}
		cout << endl;
	}
	for (int i = 0; i < Graf::GetJumlahSimpul(); i++) {
		cout << posisi[i] << " ";
	}
	cout << endl;
	cout << pemain << endl;
}

void Graf::TulisOutput(int Simpul, char Peti) {
	ofstream output;
	output.open("output.txt", ios_base::app);
	if (output.is_open()) {
		output << Simpul << "," << Peti << endl;
	} else cerr << "error" << endl;
	output.close();
}

void Graf::SetArrPosPeti(int Posisi, int Value) {
	posisi[Posisi] = Value;
}

void Graf::SetArrPosPetiOpen(int Posisi) {
	if (IsMerah(Posisi)) {
		merah--;
	} else if (IsKuning(Posisi)) {
		kuning--;
	} else if (IsHijau(Posisi)) {
		hijau--;
	}
	posisi[Posisi] *= 0;
}