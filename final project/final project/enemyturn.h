#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD
void enemyTurn(int *playerHealth, int *defendOrNot) {
=======
void enemyTurn(int *playerHealth) {
>>>>>>> origin/victory
	printf("����ĤH���^�X�I\n");

	// �ĤH�H����ܰʧ@
	int action = rand() % 2; // 0��ܧ����A1��ܨ��m

	if (action == 0) {
		// �����A�y���H���ˮ`
		printf("�ĤH��A�y���F�ˮ`�I\n");
<<<<<<< HEAD
		if (*defendOrNot == 1)
		{
			*defendOrNot = 0;
			*playerHealth -= (rand() % 6) + 15;
		}
		else
		{
			*playerHealth -= (rand() % 6) + 20;
		}
=======
		*playerHealth -= rand() % 15 + 5; // �H���ˮ`�b5��20����
>>>>>>> origin/victory
	}
	else {
		// ���m�A���C���a�������ˮ`
		printf("�ĤH�i��F���m�I\n");
	}
}
