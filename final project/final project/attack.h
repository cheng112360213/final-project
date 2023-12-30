#include <stdlib.h>
#include <stdio.h>
void playerTurn(int *enemyHealth,int *playerMana,int *power) {
	printf("輪到你的回合！\n");
	printf("1. 攻擊\n");
	printf("2. 技能\n");
	printf("3. 回魔\n");
	printf("4. 大招\n");
	int choice;
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		// 攻擊，造成隨機傷害
		printf("你對敵人造成了傷害！\n");
		*enemyHealth -= rand() % 10 + 5; // 隨機傷害在10到之間
		*power += 10;
		if (*power == 100)
			*power = 100;
		break;
	case 2:
		
		printf("你使用了技能！\n");
		*enemyHealth -= rand() % 20 + 15;
		*playerMana -= 50;
		break;
	case 3:
		*playerMana += 30;
		if (*playerMana > 100)
			*playerMana = 100;
		break;
	case 4:
		printf("你使用了大招！\n");
		*enemyHealth -= rand() % 20 + 50;
		*playerMana == 0;
		break;
	default:
		printf("無效的選擇，請重新選擇。\n");
		break;
	}
}