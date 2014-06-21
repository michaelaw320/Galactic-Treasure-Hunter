#include "Graf.h"
#include "Player.h"
#include "Rogue.h"
#include "constants.h"

/* fungsi pemilih senjata */
/* return 0 apabila tidak ada senjata yang cocok */

int Rogue(Graf G, Player P, int pos){
	//laser = cannon
	int backpack[4];
	int lockpick = DRILL;
	backpack[0] = 1;
	backpack[RAILGUN] = P.GetNRailgun();
	backpack[CANNON] = P.GetNLaser();
	backpack[DRILL] = P.GetNDrill();
	// Cek Peta
	if(G.IsHijau(pos)){
		if(G.GetNPetiKuning() == 0){
			if((G.GetNPetiMerah() == 0) && (backpack[RAILGUN] != 0)) lockpick = RAILGUN;
			else if(backpack[CANNON] != 0) lockpick = CANNON;
			else lockpick = DRILL;
		}
		else lockpick = DRILL;
	}
	else if(G.IsKuning(pos)){
		if((G.GetNPetiMerah() == 0) && (backpack[RAILGUN] != 0))lockpick = RAILGUN;
		else lockpick = CANNON;
	}
	else lockpick = RAILGUN;
	//Cek ketersediaan
	while(backpack[lockpick] == 0) lockpick--;
	return lockpick;
}