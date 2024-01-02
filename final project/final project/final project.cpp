#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "attack.h"
#include "victory.h"
#include "enemyturn.h"
// 定義玩家和敵人的初始生命值
#define PLAYER_HEALTH 100
#define ENEMY_HEALTH 100
#define PLAYER_MANA 100
#define PLAYER_power 0
#define DEFENDORNOT 0

int a = 0;
int bonus=0;
int defendOrNot = DEFENDORNOT;
int playerHealth = PLAYER_HEALTH;
int enemyHealth = ENEMY_HEALTH;
int playerMana = PLAYER_MANA;
int playerpower = PLAYER_power;
int main()
{

	// 初始化亂數種子
	srand(time(NULL));
	// 初始化玩家和敵人的生命值
	printf("=== 回合制小遊戲 ===\n");
	printf("玩家生命值: %d\t\t敵人生命值: %d\n", playerHealth, enemyHealth);
	printf("玩家魔力值: %d\t\t玩家大招條: %d\n", playerMana, playerpower);
	// 遊戲主迴圈
	while (playerHealth > 0 && enemyHealth > 0) {
		// 玩家回合

		playerTurn(&playerHealth, &enemyHealth, &playerMana, &playerpower, &defendOrNot,&bonus);
		// 敵人回合
		enemyTurn(&playerHealth, &defendOrNot, &bonus);
		// 檢查玩家是否還有生命值
		if (playerHealth <= 0) {
			printf("\n遊戲結束。~~ 菜就多練，輸不起就別玩。\n");
			printf("\n是否重新開始？ (1: 是, 0: 否): ");

			int restart;
			scanf("%d", &restart);
			if (restart) {

				printf("\033[2J");
				printf("\033[H");
				enemyHealth = ENEMY_HEALTH;
				playerHealth = PLAYER_HEALTH;
				playerMana = PLAYER_MANA;
				main();

			}
			else {
				// 遊戲結束
				printf("\n玩家選擇了逃跑，就跟 他/她 本人一樣，沒有重新開始的勇氣。\n\n");
				printf("成功次數:%d", a);
				return 0;
			}
		}

		// 檢查敵人是否還有生命值
		if (enemyHealth <= 0 &&playerHealth>0) {
			// 顯示勝利訊息
			printf("你贏了！\n");
			victory(&bonus);
			// 提示是否接關
			printf("是否接關？ (1: 是, 0: 否): ");
			int continueGame;
			scanf("%d", &continueGame);
			printf("\033[2J");
			printf("\033[H");
			if (continueGame) {
				// 繼續下一關
				if (bonus == 3)
				{
					enemyHealth = playerHealth;
					playerHealth = ENEMY_HEALTH;
					a += 1;
					main();
				}
				else
				{
					enemyHealth = ENEMY_HEALTH;
					a += 1;
					main();
				}
				
				
			}
			else {
				// 遊戲結束
				printf("\n玩家選擇了結束遊戲，就跟 他/她 的愛情一樣，一切都結束了。\n\n");
				printf("成功次數:%d", a);
				return 0;
			}
		}

		
		

		

		// 顯示玩家和敵人的生命值
		printf("玩家生命值: %d\t\t敵人生命值: %d\n", playerHealth, enemyHealth);
		printf("玩家魔力值: %d\t\t玩家大招條: %d\n", playerMana, playerpower);
		printf("\n");
	}
	system("pause");
	return 0;
}








