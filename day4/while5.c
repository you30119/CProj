#include <stdio.h>

int main7() {
	// while������ 1~10������ �� ���ϱ�
	int i = 0, sum = 0;

	while (i < 10) {
		i++;
		sum += i;
	}
	printf("1~10������ ��: %d\n", sum);

	return 0;
}