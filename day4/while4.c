#include <stdio.h>

int main4() {
	// �ݺ��� while
	// 128p

	int num = 0;

	while (num != -1) {
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num);
		if (num == -1)
			printf("�����մϴ�.\n");			// ������ ���� {} ���� ����
		else
			printf("%d��(��) �Է��ϼ̳׿�.\n", num);
	}

	return 0;
}