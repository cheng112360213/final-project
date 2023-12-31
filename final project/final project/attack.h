#include <stdlib.h>
#include <stdio.h>
#include "no.h"
void playerTurn(int *playerhealth,int *enemyHealth,int *playerMana,int *power) 
{
	if (*power == 100)
	{
		printf("輪到你的回合！\n");
		printf("1. 攻擊\n");
		printf("2. 技能\n");
		printf("3. 回魔\n");
		printf("4. 大招\n");
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
		printf("=== 回合制小遊戲 ===\n");

		switch (choice) {
		case 1:
			// 攻擊，造成隨機傷害
			printf("你對敵人造成了傷害！\n");
			*enemyHealth -= rand() % 10 + 5; // 隨機傷害在10到之間
			*power += 10;
			if (*power >= 100)
				*power = 100;
			break;
		case 2:
			if (*playerMana >= 50)
			{
				printf("你使用了技能！\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 50;
				*power += 20;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power);
				break;
			}
		case 3:
			*playerMana += 30;
			if (*playerMana > 100)
				*playerMana = 100;
			*power += 30;
			if (*power >= 100)
				*power = 100;
			break;
		case 4:
			if (*power == 100)
			{
				printf("你使用了大招！\n");
				*enemyHealth -= rand() % 20 + 50;
				*playerMana = 0;
				*power = 0;
			}
			else
			{
				printf("無效的選擇，請重新選擇。");
			}

			break;
		default:
			no(playerhealth, enemyHealth, playerMana, power);
			playerTurn(playerhealth, enemyHealth, playerMana, power);
			break;
		}
	}
	else
	{
		printf("輪到你的回合！\n");
		printf("1. 攻擊\n");
		printf("2. 技能\n");
		printf("3. 回魔\n");
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
		printf("=== 回合制小遊戲 ===\n");

		switch (choice) {
		case 1:
			// 攻擊，造成隨機傷害
			printf("你對敵人造成了傷害！\n");
			*enemyHealth -= rand() % 10 + 5; // 隨機傷害在10到之間
			*power += 10;
			if (*power >= 100)
				*power = 100;
			break;
		case 2:
			if (*playerMana >= 50)
			{
				printf("你使用了技能！\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 50;
				*power += 20;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power);
				break;
			}
			
		case 3:
			*playerMana += 30;
			if (*playerMana > 100)
				*playerMana = 100;
			*power += 30;
			if (*power >= 100)
				*power = 100;
			break;
		default:
			no(playerhealth, enemyHealth, playerMana, power);
			playerTurn(playerhealth, enemyHealth, playerMana, power);
			break;
		}
	}
}

	