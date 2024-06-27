#pragma once
#include <iostream>
#include <string>
#include <random>
#include "Player.h"
#include "Weapon.h"

class Enemy : public Player
{
public:
	Enemy(int health, std::string name) : Player(health, name) { changeWeapon = 0; changeRecharge = 0; }
	~Enemy() {};

	int changeWeapon, changeRecharge;

	void change();
};