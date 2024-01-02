#include <stdlib.h>
#include <stdio.h>
#include "no.h"
<<<<<<< HEAD
void playerTurn(int *playerhealth, int *enemyHealth, int *playerMana, int *power, int *defendOrNot)
{
	if (*power == 100)
	{
		printf("è¼ªåˆ°ä½ çš„å›žåˆ\n");
		printf("1. æ™®æ”»\n");
		printf("2. æŠ€èƒ½\n");
		printf("3. é˜²ç¦¦\n");
		printf("4. è£œé­”\n");
		printf("5. æ²»ç™’\n");
		printf("6. å¤§æ‹›\n");
=======
void playerTurn(int *playerhealth,int *enemyHealth,int *playerMana,int *power) 
{
	if (*power == 100)
	{
		printf("½ü¨ì§Aªº¦^¦X¡I\n");
		printf("1. §ðÀ»\n");
		printf("2. §Þ¯à\n");
		printf("3. ¦^Å]\n");
		printf("4. ¤j©Û\n");
>>>>>>> origin/victory
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
<<<<<<< HEAD
		printf("=== å›žåˆåˆ¶å°éŠæˆ² ===\n");

		switch (choice) {
		case 1:
			if (*playerMana >= 10)
			{
				printf("ä½ ä½¿ç”¨äº†æ™®æ”»\n");
				*enemyHealth -= rand() % 10 + 5; // ï¿½Hï¿½ï¿½ï¿½Ë®`ï¿½b10ï¿½ì¤§ï¿½ï¿½
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
				printf("ä½ ä½¿ç”¨äº†æŠ€èƒ½\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 30;
=======
		printf("=== ¦^¦X¨î¤p¹CÀ¸ ===\n");

		switch (choice) {
		case 1:
			// §ðÀ»¡A³y¦¨ÀH¾÷¶Ë®`
			printf("§A¹ï¼Ä¤H³y¦¨¤F¶Ë®`¡I\n");
			*enemyHealth -= rand() % 10 + 5; // ÀH¾÷¶Ë®`¦b10¨ì¤§¶¡
			*power += 10;
			if (*power >= 100)
				*power = 100;
			break;
		case 2:
			if (*playerMana >= 50)
			{
				printf("§A¨Ï¥Î¤F§Þ¯à¡I\n");
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
				printf("é˜²å§å°±ï¼Œä¸ç„¶å‘¢?\n");
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
				printf("å¥¶åª½~~\n");
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
				printf("ä½ ä½¿ç”¨äº†å¤§æ‹›\n");
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
				printf("§A¨Ï¥Î¤F¤j©Û¡I\n");
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
				printf("µL®Äªº¿ï¾Ü¡A½Ð­«·s¿ï¾Ü¡C");
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
		printf("è¼ªåˆ°ä½ çš„å›žåˆ\n");
		printf("1. æ™®æ”»\n");
		printf("2. æŠ€èƒ½\n");
		printf("3. é˜²ç¦¦\n");
		printf("4. è£œé­”\n");
		printf("5. æ²»ç™’\n");

=======
		printf("½ü¨ì§Aªº¦^¦X¡I\n");
		printf("1. §ðÀ»\n");
		printf("2. §Þ¯à\n");
		printf("3. ¦^Å]\n");
>>>>>>> origin/victory
		int choice;
		scanf("%d", &choice);

		printf("\033[2J");
		printf("\033[H");
<<<<<<< HEAD
		printf("=== å›žåˆåˆ¶å°éŠæˆ² ===\n");

		switch (choice) {
		case 1:
			if (*playerMana >= 10)
			{
				printf("ä½ ä½¿ç”¨äº†æ™®æ”»\n");
				*enemyHealth -= rand() % 10 + 5; // ï¿½Hï¿½ï¿½ï¿½Ë®`ï¿½b10ï¿½ì¤§ï¿½ï¿½
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
				printf("ä½ ä½¿ç”¨äº†æŠ€èƒ½\n");
				*enemyHealth -= rand() % 20 + 15;
				*playerMana -= 30;
=======
		printf("=== ¦^¦X¨î¤p¹CÀ¸ ===\n");

		switch (choice) {
		case 1:
			// §ðÀ»¡A³y¦¨ÀH¾÷¶Ë®`
			printf("§A¹ï¼Ä¤H³y¦¨¤F¶Ë®`¡I\n");
			*enemyHealth -= rand() % 10 + 5; // ÀH¾÷¶Ë®`¦b10¨ì¤§¶¡
			*power += 10;
			if (*power >= 100)
				*power = 100;
			break;
		case 2:
			if (*playerMana >= 50)
			{
				printf("§A¨Ï¥Î¤F§Þ¯à¡I\n");
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
				printf("é˜²å§å°±ï¼Œä¸ç„¶å‘¢?\n");
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
				printf("å¥¶åª½~~\n");
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
