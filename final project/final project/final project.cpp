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
// 函數聲明

void enemyTurn(int *playerHealth);
void victory();

int main()
{
	// 初始化亂數種子
	srand(time(NULL));

	// 初始化玩家和敵人的生命值
	int playerHealth = PLAYER_HEALTH;
	int enemyHealth = ENEMY_HEALTH;
	int playerMana = PLAYER_MANA;
	int playerpower = PLAYER_power;
	printf("=== 回合制小遊戲 ===\n");
	printf("玩家生命值: %d\t\t敵人生命值: %d\n", playerHealth, enemyHealth);
	printf("玩家魔力值: %d\t\t玩家大招條: %d\n",playerMana,playerpower);
	// 遊戲主迴圈
	while (playerHealth > 0 && enemyHealth > 0) {
		// 玩家回合
		playerTurn(&playerHealth,&enemyHealth,&playerMana,&playerpower);

		// 檢查敵人是否還有生命值
		if (enemyHealth <= 0) {
			// 顯示勝利訊息
			printf("你贏了！\n");

			// 提示是否接關
			printf("是否接關？ (1: 是, 0: 否): ");
			int continueGame;
			scanf("%d", &continueGame);

			if (continueGame) {
				// 繼續下一關
				enemyHealth = ENEMY_HEALTH;
			}
			else {
				// 遊戲結束
				break;
			}
		}

		// 敵人回合
		enemyTurn(&playerHealth);

		// 檢查玩家是否還有生命值
		if (playerHealth <= 0) {
			printf("你輸了，遊戲結束。\n");
			break;
		}

		// 顯示玩家和敵人的生命值
		printf("玩家生命值: %d\t\t敵人生命值: %d\n", playerHealth,enemyHealth);
		printf("玩家魔力值: %d\t\t玩家大招條: %d\n", playerMana,playerpower);
		printf("\n");
	}

	return 0;
}







