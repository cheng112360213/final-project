#include <stdlib.h>
#include <stdio.h>
#include "no.h"
void playerTurn(int *playerhealth,int *enemyHealth,int *playerMana,int *power) 
{
	if (*power == 100)
	{
		printf("����A���^�X�I\n");
		printf("1. ����\n");
		printf("2. �ޯ�\n");
		printf("3. �^�]\n");
		printf("4. �j��\n");
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
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
				printf("�A�ϥΤF�j�ۡI\n");
				*enemyHealth -= rand() % 20 + 50;
				*playerMana = 0;
				*power = 0;
			}
			else
			{
				printf("�L�Ī���ܡA�Э��s��ܡC");
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
		printf("����A���^�X�I\n");
		printf("1. ����\n");
		printf("2. �ޯ�\n");
		printf("3. �^�]\n");
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
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

	