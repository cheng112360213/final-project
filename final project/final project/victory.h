#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void victory()
{

	int pc;
	printf("���ߧA�A�A��o�F�@�ӱj�O�D��I\n\n");
	printf("�g���+50\n\n");
	
	srand(time(NULL));
	pc = rand() % 4 + 1;
	printf("�B�~���y: ");
	printf("��o�@��j �B�U�@���d�����O*1.5 �B �L�������@�^�X �B �N�ۨ���q�P�ĤH�洫\n\n");
	system("pause");

	switch (pc)
	{
		case 1:
			printf("��o�@��j\n");
			break;
		case 2:
			printf("�U�@���d�����O*1.5\n");
			break;
		case 3:
			printf("�L�������@�^�X\n");
			break;
		case 4:
			printf("�N�ۨ���q�P�ĤH�洫\n");
	}
}
