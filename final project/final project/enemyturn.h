#include <stdlib.h>
#include <stdio.h>

void enemyTurn(int *playerHealth, int *defendOrNot, int *bonus)
{
	int d=0;
	if (*bonus == 2)
	{
		d = 1;
	}
	printf("����ĤH���^�X�I\n");
	
	int action = rand() % 2; 

	if (action == 0 && d == 1)
	{

		// �����A�y���H���ˮ`
		printf("�ĤH��A�y���F�ˮ`�I\n");
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
		printf("�޵P���A�פF�@�M\n");
		*bonus = 0;
	}
	else
	{
		printf("�ĤH�i��F���m\n");
	}

}