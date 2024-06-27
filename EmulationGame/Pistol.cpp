#include "Pistol.h"

void Pistol::shoot() {
	ammo--;
}

void Pistol::recharge() {
	ammo = maxAmmo;
}