#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main2() {
	// if��
	// if(){} else{}
	int age;
	printf("���̸� �Է��ϼ���>>");
	scanf("%d", &age);

	if (age < 20) {
		// ()�� ������ ���� �� ������ �ڵ�;
		printf("�̼�����\n");
	}
	else {
		// ()�� ������ Ʋ�� �� ������ �ڵ�;
		printf("����\n");
	}
	printf("\n");			// if�ۿ� �����ϱ� ������ ����� �ڵ�

	return 0;
}