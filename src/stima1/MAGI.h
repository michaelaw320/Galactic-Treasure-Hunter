
#ifndef MAGI_H
#define	MAGI_H

#include "Graf.h"
#include "Player.h"

int MAGI(Graf G, Player P, int TimeLeft);

int* Melchior(Graf G, Player P,int* ArrayJarak);
/* Mengusulkan kandidat simpul yang dikunjungi berikutnya */
bool Balthazar(int* ArrayJarak, int Simpul, int TimeLeft);
/* Menolak atau menerima kandidat tujuan simpul berdasarkan waktu tempuh*/
bool Casper(Graf G, Player P, int TimeLeft, int* ArrayJarak, int Simpul);
/* Menolak atau menerima kandidat tujuan berdasarkan ketersediaan alat pembuka peti dan mengecek apakah peti meledak jika dicoba dibuka*/

#endif	/* MAGI_H */

