

#ifndef PLAYER_H
#define	PLAYER_H

class Player {
public:
    Player();
    Player(int StartingPos, int _Platinum);
    virtual ~Player();
    int GetCurrentPos();
    int GetPlatinum();
    int GetNDrill();
    int GetNLaser();
    int GetNRailgun();
	int GetFuel();
    void SetCurrentPos(int Pos);
    void SetPlatinum(int _Platinum);
    void AddPlatinum(int _Platinum);
    void SetNDrill(int Val);
    void SetNLaser(int Val);
    void SetNRailgun(int Val);
    void UseDrill();
    void UseLaser();
    void UseRailgun();
	void SetFuel(int val);
	void UseFuel(int val);
private:
    int CurrentPos;
    int Platinum;
    int NDrill;
    int NLaser;
    int NRailgun;
	int fuel;
};

#endif	/* PLAYER_H */

