#include "Game.h"

void Game::start()
{
	std::cout << "You: " << player->name << std::endl;
	std::cout << "Your health: " << player->health << std::endl;
	std::cout << "'s' - shoot\n'r' - recharge\n'q' - change weapon\n'w' - move Bot" << std::endl;

	while (game)
	{
		char input = _getch();
		system("cls");
		if (input != 'w')
			player->print();
		switch (input) {
		case 's':
			player->shoot();
			player->randomHit();
			if (player->chanceHit < 30) {
				if (player->currentWeapon == 1) {
					enemy->health -= 15;
				}
				else {
					for (int i = 0; i < 3; i++) {
						enemy->health -= 10;
					}
				}
				std::cout << std::endl << "Hit! Enemy`s health: " << enemy->health << std::endl;
				if (enemy->health <= 0) {
					system("cls");
					game = false;
					std::cout << "Player Win!!!" << std::endl;
				}
			}
			break;
		case 'r':
			player->recharge();
			break;
		case 'q':
			player->change();
			break;
		case 'w':
			enemy->print();
			enemy->change();
			enemy->shoot();
			enemy->randomHit();
			if (enemy->changeRecharge == 1)
				enemy->recharge();
			if (enemy->chanceHit < 30) {
				if (enemy->currentWeapon == 1) {
					player->health -= 15;
				}
				else {
					for (int i = 0; i < 3; i++) {
						player->health -= 10;
					}
				}
				std::cout << std::endl << "Hit! Player`s health: " << player->health << std::endl;
				if (player->health <= 0) {
					system("cls");
					game = false;
					std::cout << "Bot Win!!!" << std::endl;
				}
			}
			break;
		case 'x':
			system("cls");
			game = false;
			break;
		case 'c':
			system("cls");
			break;
		}
	}
}