#include <stdio.h>

// ���� 144p
int main() {
	// #1
	// 100 ~ 200 ���� �� 3�� 7�� ������� ����ϴ� ���α׷� �����
	for (int i = 100; i <= 200; i++) {
		if(i % 21 == 0)
			printf("%d ", i);
	}
	printf("\n");

	// #2
	// 2~9 ���� �� �� ���� �Է¹޾� �������� ����ϴ� ���α׷�
	// ���� 4�� 8�� �Է��ϸ� 4�� ~ 8���� ���
	// ��, 8�� 4�� �Է��ص� 4�� ~ 8���� ���
	int start = 0, end = 0;

	printf("ù��° ���ڸ� �Է����ּ���.");
	scanf("%d", &start);
	printf("�ι�° ���ڸ� �Է����ּ���.");
	scanf("%d", &end);

	// start�� end���� �� ũ�� �ٲ������(swap)
	int temp = 0;

	if (start > end) {
		temp = start;
		start = end;
		end = temp;
	}

	int n1, n2;
	for (n1 = 1; n1 < 10; n1++) {
		for (n2 = start; n2 <= end; n2++) {
			printf("%d �� %d = %d\t", n2, n1, n1 * n2);
		}
		printf("\n");
	}
	

	return 0;
}