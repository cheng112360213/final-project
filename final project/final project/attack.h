﻿#include <stdlib.h>
#include <stdio.h>
#include "no.h"
<<<<<<< HEAD
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
=======
void playerTurn(int *playerhealth,int *enemyHealth,int *playerMana,int *power) 
{
	if (*power == 100)
	{
		printf("����A���^�X�I\n");
		printf("1. ����\n");
		printf("2. �ޯ�\n");
		printf("3. �^�]\n");
		printf("4. �j��\n");
>>>>>>> origin/victory
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
<<<<<<< HEAD
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
=======
		printf("=== �^�X��p�C�� ===\n");

		switch (choice) {
		case 1:
			// �����A�y���H���ˮ`
			printf("�A��ĤH�y���F�ˮ`�I\n");
			*enemyHealth -= rand() % 10 + 5; // �H���ˮ`�b10�줧��
			*power += 10;
			if (*power >= 100)
				*power = 100;
			break;
		case 2:
			if (*playerMana >= 50)
			{
				printf("�A�ϥΤF�ޯ�I\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 50;
>>>>>>> origin/victory
				*power += 20;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
<<<<<<< HEAD
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
=======
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
				printf("�A�ϥΤF�j�ۡI\n");
				*enemyHealth -= rand() % 20 + 50;
				*playerMana = 0;
>>>>>>> origin/victory
				*power = 0;
			}
			else
			{
<<<<<<< HEAD
				no(playerhealth, enemyHealth, playerMana, power);
				playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
			}

		default:
			no(playerhealth, enemyHealth, playerMana, power);
			playerTurn(playerhealth, enemyHealth, playerMana, power, defendOrNot);
=======
				printf("�L�Ī���ܡA�Э��s��ܡC");
			}

			break;
		default:
			no(playerhealth, enemyHealth, playerMana, power);
			playerTurn(playerhealth, enemyHealth, playerMana, power);
>>>>>>> origin/victory
			break;
		}
	}
	else
	{
<<<<<<< HEAD
		printf("輪到你的回合\n");
		printf("1. 普攻\n");
		printf("2. 技能\n");
		printf("3. 防禦\n");
		printf("4. 補魔\n");
		printf("5. 治癒\n");

=======
		printf("����A���^�X�I\n");
		printf("1. ����\n");
		printf("2. �ޯ�\n");
		printf("3. �^�]\n");
>>>>>>> origin/victory
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
<<<<<<< HEAD
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
=======
		printf("=== �^�X��p�C�� ===\n");

		switch (choice) {
		case 1:
			// �����A�y���H���ˮ`
			printf("�A��ĤH�y���F�ˮ`�I\n");
			*enemyHealth -= rand() % 10 + 5; // �H���ˮ`�b10�줧��
			*power += 10;
			if (*power >= 100)
				*power = 100;
			break;
		case 2:
			if (*playerMana >= 50)
			{
				printf("�A�ϥΤF�ޯ�I\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 50;
>>>>>>> origin/victory
				*power += 20;
				if (*power >= 100)
					*power = 100;
				break;
			}
			else
			{
				no(playerhealth, enemyHealth, playerMana, power);
<<<<<<< HEAD
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
=======
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
>>>>>>> origin/victory
			break;
		}
	}
}

<<<<<<< HEAD

=======
	
>>>>>>> origin/victory
