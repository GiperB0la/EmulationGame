#include "Enemy.h"

void Enemy::change()
{
	std::random_device randomChangeWeapon;
	std::random_device randomRecharge;

	std::mt19937 gen(randomChangeWeapon());
	std::uniform_int_distribution<> dis(0, 1);
	changeWeapon = dis(gen);

	std::mt19937 gen2(randomRecharge());
	std::uniform_int_distribution<> dis2(0, 1);
	changeRecharge = dis2(gen2);

	if (changeWeapon == 1) {
		weapon = pistol;
		currentWeapon = weapon->idWeapon;
	}
	else {
		weapon = machine;
		currentWeapon = weapon->idWeapon;
	}
	std::cout << "Bot`s current weapon: " << weapon->nameWeapon << std::endl;
}