﻿#include <stdlib.h>
#include <stdio.h>
#include "no.h"
void playerTurn(int *playerhealth, int *enemyHealth, int *playerMana, int *power, int *defendOrNot)
{
	if (*power == 100)
	{
		printf("輪到你的回合\n");
		printf("1. 普攻\n");
		printf("2. 技能\n");
		printf("3. 防禦\n");
		printf("4. 補魔\n");
		printf("5. 治癒\n");
		printf("6. 大招\n");
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
		printf("=== 回合制小遊戲 ===\n");

		switch (choice) {
		case 1:
			if (*playerMana >= 10)
			{
				printf("你使用了普攻\n");
				*enemyHealth -= rand() % 10 + 5; // �H���ˮ`�b10�줧��
				*playerMana -= 10;
				*power += 10;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}
		case 2:
			if (*playerMana >= 30)
			{
				printf("你使用了技能\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 30;
				*power += 20;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}

		case 3:
			if (*playerMana >= 20)
			{
				printf("防吧就，不然呢?\n");
				*defendOrNot = 1;
				if (*defendOrNot == 1)
					*defendOrNot = 1;
				*playerMana -= 20;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}

		case 4:
			*playerMana += 30;
			if (*playerMana > 100)
				*playerMana = 100;
			break;

		case 5:
			if (*playerMana >= 50)
			{
				printf("奶媽~~\n");
				*playerhealth += (rand() % 5) + 16;
				if (*playerhealth == 100)
					*playerhealth = 100;
				*playerMana -= 50;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}
		case 6:
			if (*power == 100 && *playerMana >= 70)
			{
				printf("你使用了大招\n");
				*enemyHealth -= rand() % 11 + 50;
				*playerMana -= 70;
				*power = 0;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
			}

		default:
			no(playerhealth, enemyHealth, playerMana, power);
			playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
			break;
		}
	}
	else
	{
		printf("輪到你的回合\n");
		printf("1. 普攻\n");
		printf("2. 技能\n");
		printf("3. 防禦\n");
		printf("4. 補魔\n");
		printf("5. 治癒\n");

		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
		printf("=== 回合制小遊戲 ===\n");

		switch (choice) {
		case 1:
			if (*playerMana >= 10)
			{
				printf("你使用了普攻\n");
				*enemyHealth -= rand() % 10 + 5; // �H���ˮ`�b10�줧��
				*playerMana -= 10;
				*power += 10;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}
		case 2:
			if (*playerMana >= 30)
			{
				printf("你使用了技能\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 30;
				*power += 20;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}

		case 3:
			if (*playerMana >= 20)
			{
				printf("防吧就，不然呢?\n");
				*defendOrNot = 1;
				if (*defendOrNot == 1)
					*defendOrNot = 1;
				*playerMana -= 20;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}

		case 4:
			*playerMana += 30;
			if (*playerMana > 100)
				*playerMana = 100;
			break;

		case 5:
			if (*playerMana >= 50)
			{
				printf("奶媽~~\n");
				*playerhealth += (rand() % 5) + 16;
				if (*playerhealth == 100)
					*playerhealth = 100;
				*playerMana -= 50;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
				break;
			}

		default:
			no(playerhealth, enemyHealth, playerMana, power);
			playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
			break;
		}
	}
}


