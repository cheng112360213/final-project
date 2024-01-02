#include <stdlib.h>
#include <stdio.h>

void enemyTurn(int *playerHealth, int *defendOrNot, int *bonus)
{
	int d=0;
	if (*bonus == 2)
	{
		d = 1;
	}
	printf("輪到敵人的回合！\n");
	
	int action = rand() % 2; 

	if (action == 0 && d == 1)
	{

		// 攻擊，造成隨機傷害
		printf("敵人對你造成了傷害！\n");
		if (*defendOrNot == 1)
		{
			*defendOrNot = 0;
			*playerHealth -= (rand() % 6) + 15;

		} 
		else
		{
			*playerHealth -= (rand() % 6) + 20;
		}

		
	}
	else if (action == 0 && d == 1)
	{
		printf("盾牌幫你擋了一刀\n");
		*bonus = 0;
	}
	else
	{
		printf("敵人進行了防禦\n");
	}

}