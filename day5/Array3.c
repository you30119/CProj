#include <stdio.h>

int main3() {
	// ���� 152p
	int i;
	int odd[3];				// �ʱ�ȭ���� ���� �迭
	int even[5] = { 2,3,6,8,10 };

	// �迭�� ���� ��� �ʱ�ȭ
	odd[0] = 1;
	odd[1] = 3;
	odd[2] = 5;

	// ���� ��� ���� �� ���
	printf("%d %d %d\n", odd[0], odd[1], odd[2]);

	// for���� ���� �迭 ��� ���
	for (int i = 0; i < 5; i++) {
		printf("%d ", even[i]);
	}
	printf("\n");


	// ���� 156p
	char mind[30] = "I Love programing!";
	printf("%s\n", mind);

	mind[7] = '\0';			// 8��° ��ҷ� NULL ���� ����
	printf("%s\n", mind);

	mind[1] = '\0';			// 2��° ��ҷ� NULL ���� ����
	printf("%s\n", mind);

	char str[50] = { 0, };			// 50ĭ ��� NULL ���ڷ� �ʱ�ȭ
	printf("���ڿ��� �Է��ϼ���: ");
	scanf("%s", str);		// ���ڿ��� &��ȣ�� �ʿ���� (������ �ʿ�)

	printf("�Էµ� ���ڿ�: %s\n", str);

	
	
	return 0;
}