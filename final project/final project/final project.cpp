#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 定義玩家和敵人的初始生命值
#define PLAYER_HEALTH 100
#define ENEMY_HEALTH 100

// 函數聲明
void playerTurn(int *enemyHealth);
void enemyTurn(int *playerHealth);
void victory();

int main()
{
	// 初始化亂數種子
	srand(time(NULL));

	// 初始化玩家和敵人的生命值
	int playerHealth = PLAYER_HEALTH;
	int enemyHealth = ENEMY_HEALTH;

	printf("=== 回合制小遊戲 ===\n");

	// 遊戲主迴圈
	while (playerHealth > 0 && enemyHealth > 0) {
		// 玩家回合
		playerTurn(&enemyHealth);

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
		printf("玩家生命值: %d\n", playerHealth);
		printf("敵人生命值: %d\n", enemyHealth);
		printf("\n");
	}

	return 0;
}

// 勝利時獲得強力道具的函數
void victory() {
	printf("恭喜你，你獲得了一個強力道具！\n");
	// 在這裡可以添加獲得道具的相應處理邏輯
}

// 玩家回合的函數
void playerTurn(int *enemyHealth) {
	printf("輪到你的回合！\n");
	printf("1. 攻擊\n");
	printf("2. 防禦\n");

	int choice;
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		// 攻擊，造成隨機傷害
		printf("你對敵人造成了傷害！\n");
		*enemyHealth -= rand() % 20 + 10; // 隨機傷害在10到30之間
		break;
	case 2:
		// 防禦，降低敵人的攻擊傷害
		printf("你進行了防禦！\n");
		break;
	default:
		printf("無效的選擇，請重新選擇。\n");
		break;
	}
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
