#include "Player.h"

void Player::print() { 
	std::cout << "Move " << name << " hp: " << health << std::endl; 
}

void Player::shoot() {
	if (weapon->ammo != 0) {
		weapon->shoot();
		std::cout << "a " << weapon->nameWeapon << " shoot!" << " quantity ammo: " << weapon->ammo << std::endl;
	}
	else { 
		std::cout << "Emrty! recharge required." << std::endl; 
	}
}

void Player::recharge() {
	weapon->recharge();
	std::cout << "Recharge!" << " quantity ammo: " << weapon->ammo << std::endl;
}

void Player::change() {
	if (currentWeapon == 1) { weapon = machine; }
	else { weapon = pistol; }
	currentWeapon = weapon->idWeapon;
	std::cout << "Change wepoan. Current weapon: " << weapon->nameWeapon << std::endl;
}

void Player::randomHit() {
	if (weapon->ammo > 0) {
		std::random_device randomChangeWeapon;
		std::mt19937 gen(randomChangeWeapon());
		std::uniform_int_distribution<> dis(0, 99);
		chanceHit = dis(gen);
	}
}