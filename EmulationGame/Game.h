#pragma once
#include <iostream>
#include <conio.h>
#include "Player.h"
#include "Enemy.h"

class Game
{
public:
	Game() { player = new Player(100, "Giperbola"); enemy = new Enemy(100, "Bot"); game = true; };
	~Game() { delete player; delete enemy; };

	void start();

private:
	Player* player;
	Enemy* enemy;
	bool game;
};