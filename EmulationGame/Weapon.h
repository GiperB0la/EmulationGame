#pragma once
#include <iostream>
#include <string>

class Player;
class Weapon
{
	friend Player;
public:
	Weapon() : maxAmmo(0), ammo(0), nameWeapon("None"), idWeapon(0) {};
	Weapon(int maxAmmo, int ammo, std::string nameWeapon, int idWeapon) : maxAmmo(maxAmmo), ammo(ammo), nameWeapon(nameWeapon), idWeapon(idWeapon) {};
	~Weapon() {};

public:
	int ammo, maxAmmo, idWeapon;
	std::string nameWeapon;

	virtual void shoot();
	virtual void recharge();
};