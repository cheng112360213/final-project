#include <stdlib.h>
#include <stdio.h>
void enemyTurn(int *playerHealth) {
	printf("����ĤH���^�X�I\n");

	// �ĤH�H����ܰʧ@
	int action = rand() % 2; // 0��ܧ����A1��ܨ��m

	if (action == 0) {
		// �����A�y���H���ˮ`
		printf("�ĤH��A�y���F�ˮ`�I\n");
		*playerHealth -= rand() % 15 + 5; // �H���ˮ`�b5��20����
	}
	else {
		// ���m�A���C���a�������ˮ`
		printf("�ĤH�i��F���m�I\n");
	}
}
