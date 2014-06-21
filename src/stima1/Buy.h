
#ifndef BUY_H
#define	BUY_H

#include "Graf.h"
#include "Player.h"

#define DRILLPRICE 1
#define LASERPRICE 2
#define RAILGUNPRICE 3

void Buy(Graf G, Player &P);
/*beli yang terbaik dan menghabiskan modal*/
/* paling bodoh */
void Buy2(Graf G, Player &P);
/*beli berdasarkan hanya yang perlu dibuka dan sesuai tipe, kalau modal tidak cukup tidak beli*/
/* lebih pintar */
void Buy3(Graf G, Player &P);
/*beli sebisa mungkin railgun jika tidak cukup modal beli fallback nya, kalau tidak cukup tidak beli*/
/* paling pintar */

#endif	/* BUY_H */

