#include <stdio.h>

int main7() {
	// while문으로 1~10까지의 합 구하기
	int i = 0, sum = 0;

	while (i < 10) {
		i++;
		sum += i;
	}
	printf("1~10까지의 합: %d\n", sum);

	return 0;
}