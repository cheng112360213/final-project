#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "attack.h"
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
		playerTurn(&enemyHealth,&playerMana,&playerpower);

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

// 勝利時獲得強力道具的函數
void victory() {
	printf("恭喜你，你獲得了一個強力道具！\n");
	// 在這裡可以添加獲得道具的相應處理邏輯
}



// 敵人回合的函數
void enemyTurn(int *playerHealth) {
	printf("輪到敵人的回合！\n");

	// 敵人隨機選擇動作
	int action = rand() % 2; // 0表示攻擊，1表示防禦

	if (action == 0) {
		// 攻擊，造成隨機傷害
		printf("敵人對你造成了傷害！\n");
		*playerHealth -= rand() % 15 + 5; // 隨機傷害在5到20之間
	}
	else {
		// 防禦，降低玩家的攻擊傷害
		printf("敵人進行了防禦！\n");
	}
}
