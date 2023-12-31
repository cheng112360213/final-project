#include <stdlib.h>
#include <stdio.h>
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
