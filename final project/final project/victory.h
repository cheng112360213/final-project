#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void victory(int *bonus)
{

	
	printf("���ߧA�A�A��o�F�@�ӱj�O�D��I\n\n");
	printf("�g���+50\n\n");

	srand(time(NULL));
	*bonus = rand() % 3 + 1;
	printf("�B�~���y: ");
	switch (*bonus)
	{
	case 1:
		printf("�@��j(�U�@���d�����O*1.5)\n");
		
		break;
	case 2:
		printf("�޵P(���ק����@�^�X)\n");
		break;
	case 3:
		printf("�A���N�O�ڪ�(�N�ۨ���q�P�ĤH�洫)\n");
	}
	
}