#include <stdio.h>

int main4() {
	// ���� 158p
	// #1
	// ���̰� 5�� int�� �迭�� �����ϰ� �ʱ�ȭ�Ѵ�. �� �� �� ��Ҵ� ���ϴ� ���� ��´�.
	// �ش� �迭�� ���� ���� ����� ����ϱ�

	/*
	1. ����
	2. ���
	*/

	int num[5] = { 10, 20, 30, 40, 50 };
	int sum = 0;
	double avg = 0.0;

	for (int i = 0; i < 5; i++) {
		sum += num[i];
	}
	printf("�� �� : %d\n", sum);

	avg = sum / 5.0;

	printf("��� : %.2lf\n", avg);

	// #2 ���� �ܾ �ϳ� �Է� �޾Ƽ� �������� ����ϴ� ���α׷�
	/*
	�Է°� : hello
	��°� : olleh
	*/

	// �ݺ����� ������ ���� �� �ֳ�

	char str[64] = { '\0',};			// 64ĭ ����
	char reverse[64] = { 0, };

	printf("���� �ܾ �Է����ּ���.\n");
	scanf("%s", str);
	printf("�Է��� ���� �ܾ� : %s\n", str);		// str[0] ='h', str[1] = 'e', str[2] = 'l', ...
	// NULL���ڰ� �ƴ� ��������
	// reverse[0] = str[4];
	// reverse[1] = str[3];

	int j = 0;
	for (int i = 63; i >= 0; i--) {			// 64ĭ�� �����ϸ� 63�������� ����
		if (str[i] == '\0') {
			continue;
		}
		reverse[j] = str[i];
		j++;
	}
	printf("������ ��� : %s", reverse);

	
	

	return 0;
}