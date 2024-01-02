#include <stdlib.h>
#include <stdio.h>

void enemyTurn(int *playerHealth, int *defendOrNot)
{


	printf("輪到敵人的回合！\n");
	
	int action = rand() % 2; 

	if (action == 0)
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
	else
	{
		
		printf("嚙衝人嚙箠嚙踝蕭F嚙踝蕭嚙練嚙瘢\n");
	}

}