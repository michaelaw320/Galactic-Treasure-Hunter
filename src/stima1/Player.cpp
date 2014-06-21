
#include "Player.h"

using namespace std;

Player::Player() {
    CurrentPos = 0;
    Platinum = 0;
    NDrill = 0;
    NLaser = 0;
    NRailgun = 0;
}
Player::Player(int StartingPos, int _Platinum) {
    CurrentPos = StartingPos;
    Platinum = _Platinum;
    NDrill = 0;
    NLaser = 0;
    NRailgun = 0;
}

Player::~Player() {
}

int Player::GetCurrentPos() {
    return CurrentPos;
}
int Player::GetPlatinum() {
    return Platinum;
}
int Player::GetNDrill() {
    return NDrill;
}
int Player::GetNLaser(){
    return NLaser;
}
int Player::GetNRailgun(){
    return NRailgun;
}
int Player::GetFuel() {
	return fuel;
}
void Player::SetCurrentPos(int Pos) {
    CurrentPos = Pos;
}
void Player::SetPlatinum(int _Platinum){
    Platinum = _Platinum;
}
void Player::AddPlatinum(int _Platinum){
    Platinum += _Platinum;
}

void Player::SetNDrill(int Val){
    NDrill = Val;
}
void Player::SetNLaser(int Val) {
    NLaser = Val;
}
void Player::SetNRailgun(int Val) {
    NRailgun = Val;
}
void Player::UseDrill() {
    NDrill--;
}
void Player::UseLaser() {
    NLaser--;
}
void Player::UseRailgun() {
    NRailgun--;
}
void Player::SetFuel(int val) {
	fuel = val;
}
void Player::UseFuel(int val) {
	fuel -= val;
}