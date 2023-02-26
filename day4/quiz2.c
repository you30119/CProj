#include <stdio.h>

// 교재 144p
int main() {
	// #1
	// 100 ~ 200 숫자 중 3과 7의 공배수를 출력하는 프로그램 만들기
	for (int i = 100; i <= 200; i++) {
		if(i % 21 == 0)
			printf("%d ", i);
	}
	printf("\n");

	// #2
	// 2~9 숫자 중 두 개를 입력받아 구구단을 출력하는 프로그램
	// 만약 4와 8을 입력하면 4단 ~ 8단을 출력
	// 단, 8과 4를 입력해도 4단 ~ 8단을 출력
	int start = 0, end = 0;

	printf("첫번째 숫자를 입력해주세요.");
	scanf("%d", &start);
	printf("두번째 숫자를 입력해주세요.");
	scanf("%d", &end);

	// start가 end보다 더 크면 바꿔버리기(swap)
	int temp = 0;

	if (start > end) {
		temp = start;
		start = end;
		end = temp;
	}

	int n1, n2;
	for (n1 = 1; n1 < 10; n1++) {
		for (n2 = start; n2 <= end; n2++) {
			printf("%d × %d = %d\t", n2, n1, n1 * n2);
		}
		printf("\n");
	}
	

	return 0;
}