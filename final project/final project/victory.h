#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void victory(int *bonus)
{

	
	printf("恭喜你，你獲得了一個強力道具！\n\n");
	printf("經驗值+50\n\n");

	srand(time(NULL));
	*bonus = rand() % 3 + 1;
	printf("額外獎勵: ");
	switch (*bonus)
	{
	case 1:
		printf("一把槍(下一關卡攻擊力*1.5)\n");
		
		break;
	case 2:
		printf("盾牌(阻擋攻擊一回合)\n");
		break;
	case 3:
		printf("你的就是我的(將自身血量與敵人交換)\n");
	}
	
}