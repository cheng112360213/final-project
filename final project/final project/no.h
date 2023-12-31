#include<stdio.h>
void no(int *playerhealth, int *enemyHealth, int *playerMana, int *power)
{
	printf("無效的選擇，請重新選擇。\n");
	printf("玩家生命值: %d\t\t敵人生命值: %d\n", *playerhealth, *enemyHealth);
	printf("玩家魔力值: %d\t\t玩家大招條: %d\n", *playerMana, *power);
	printf("\n");
}
