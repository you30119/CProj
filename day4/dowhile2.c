#include <stdio.h>

int main6() {
	// do~while��
	// 133p

	int number = 0;
	int sum = 0;

	do {
		number++;
		sum += number;
	} while (number < 10);
	printf("1~10������ �� : %d", sum);

	return 0;
}