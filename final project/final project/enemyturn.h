#include <stdlib.h>
#include <stdio.h>

void enemyTurn(int *playerHealth, int *defendOrNot)
{


	printf("����ĤH���^�X�I\n");
	
	int action = rand() % 2; 

	if (action == 0)
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
	else
	{
		
		printf("�ĤH�i��F���m�I\n");
	}

}