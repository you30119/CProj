#include <stdio.h>

int main11() {
	// ��� (control flow) : ���ǹ�, �ݺ���, �б⹮ ...
	// ���ǹ� : if, switch
	// �ݺ��� : while, for
	// ��Ÿ��� : break, continue, goto

	// break : �ݺ��� ������, switch�� ������
	// continue : �ݺ��� �� ���� ���ư���

	// 140page
	int num;

	while (1)
	{
		printf("-1 �Է½� ���� : ");
		scanf("%d", &num);
		if (num == -1) {
			break;				// break�� ������ �ݺ��� ��� ����
			printf("�� �ڵ�� Dead Code �Դϴ�.\n");
		}
	}

	// 141page continue
	// �ݺ��� 1ȸ�� ��� (�ؿ� �ڵ�� �� �̻� �������� �ʰ� ���� �ö�, ��ŵ)
	for (int n = 1; n <= 5; n++) {
		if (n == 3) {
			continue;			// continue�� ������ ()�� �ö�		// 3�� �� 1 2 4 5 �� ����
		}
		printf("%d ", n);
	}

	return 0;
}