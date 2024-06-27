#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"

class Pistol : public Weapon
{
public:
	Pistol() : Weapon(7, 7, "Digle", 1) {};
	~Pistol() {};

	void shoot() override;
	void recharge() override;
};