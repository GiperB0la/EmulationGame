#include "Machine.h"

void Machine::shoot() {
	ammo -= 3;
}

void Machine::recharge() {
	ammo = maxAmmo;
}