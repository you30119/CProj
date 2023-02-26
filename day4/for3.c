#include <stdio.h>

// 구구단 결과 (138page)		// 이중 for문
int main10() {
	int dan, mul;
	// 단수 for 문
	for (dan = 2; dan < 10; dan++) {
		// 곱하기 for 문
		for (mul = 1; mul < 10; mul++) {
			printf("%d ", dan * mul);
		}
		printf("\n");		// 배열을 맞추기 위해 사용
	}

	// 제어문(조건문, 반복문, 기타) : 중첩시킬 수 있음

	// if 안에 if
	int n1 = 0, n2 = 1;
	if (n1 < n2) {
		if (n1 != n2) {
			printf("n1과 n2는 같지않다.\n");
		}
		printf("n1이 작다.\n");
	}

	// if 안에 for
	if (n1 == n2) {
		// 조건문이 맞을 때만 반복문이 실행
		for (int i = 0; i < 3; i++) {
			printf("조건문 안에 있는 반복문\n");
		}
	}

	// for 안에 if
	for (int i = 0; i < 3; i++) {
		if (n1 != n2) {
			printf("조건문 코드!");			// 조건문 여러번 실행
		}
		printf("반복문 코드\n");
	}

	// for 안에 for (이중 반복문)
	for (int i = 0; i < 3; i++) {			// 바깥 3번
		for (int j = 0; j < 2; j++) {		// 안쪽 2번
			// 바깥에 있는 for의 갯수만큼 안쪽 for를 반복
			printf("안쪽for %d\n", j);
		}
		printf("<<바깥 for %d>>\n", i);
	}

	// 이중for문
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("i = %d, j = %d\n", i, j);
		}
	}
	return 0;
}