#include <stdlib.h>
#include <stdio.h>
void playerTurn(int *enemyHealth,int *playerMana,int *power) {
	printf("����A���^�X�I\n");
	printf("1. ����\n");
	printf("2. �ޯ�\n");
	printf("3. �^�]\n");
	printf("4. �j��\n");
	int choice;
	scanf("%d", &choice);

	switch (choice) {
	case 1:
		// �����A�y���H���ˮ`
		printf("�A��ĤH�y���F�ˮ`�I\n");
		*enemyHealth -= rand() % 10 + 5; // �H���ˮ`�b10�줧��
		*power += 10;
		if (*power == 100)
			*power = 100;
		break;
	case 2:
		
		printf("�A�ϥΤF�ޯ�I\n");
		*enemyHealth -= rand() % 20 + 15;
		*playerMana -= 50;
		break;
	case 3:
		*playerMana += 30;
		if (*playerMana > 100)
			*playerMana = 100;
		break;
	case 4:
		printf("�A�ϥΤF�j�ۡI\n");
		*enemyHealth -= rand() % 20 + 50;
		*playerMana == 0;
		break;
	default:
		printf("�L�Ī���ܡA�Э��s��ܡC\n");
		break;
	}
}