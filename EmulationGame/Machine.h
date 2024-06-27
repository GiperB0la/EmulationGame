#pragma once
#include <iostream>
#include <string>
#include "Weapon.h"

class Machine : public Weapon
{
public:
	Machine() : Weapon(30, 30, "AK-47", 2) {};
	~Machine() {};

	void shoot() override;
	void recharge() override;
};