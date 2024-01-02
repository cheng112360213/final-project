#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void victory()
{

	int pc;
	printf("恭喜你，你獲得了一個強力道具！\n\n");
	printf("經驗值+50\n\n");
	
	srand(time(NULL));
	pc = rand() % 4 + 1;
	printf("額外獎勵: ");
	printf("獲得一把槍 、下一關卡攻擊力*1.5 、 無視攻擊一回合 、 將自身血量與敵人交換\n\n");
	system("pause");

	switch (pc)
	{
		case 1:
			printf("獲得一把槍\n");
			break;
		case 2:
			printf("下一關卡攻擊力*1.5\n");
			break;
		case 3:
			printf("無視攻擊一回合\n");
			break;
		case 4:
			printf("將自身血量與敵人交換\n");
	}
}
