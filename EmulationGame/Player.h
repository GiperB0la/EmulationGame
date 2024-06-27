#pragma once
#include <iostream>
#include <string>
#include <random>
#include "Weapon.h"
#include "Pistol.h"
#include "Machine.h"

class Player
{
public:
	Player(int health, std::string name) : health(health), name(name), chanceHit(0) {
		weapon = pistol;
		currentWeapon = weapon->idWeapon;
	};
	~Player() { delete pistol; delete machine; };

	int health, chanceHit, currentWeapon;
	std::string name;

	void print();
	void shoot();
	void recharge();
	void change();
	void randomHit();

protected:
	Pistol* pistol = new Pistol;
	Machine* machine = new Machine;
	Weapon* weapon = new Weapon;
};