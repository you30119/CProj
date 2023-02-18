#include<stdio.h>

int main8() {
	// 산술 연산자
	// +, -, *, /, %
	// + : 왼쪽 값과 오른쪽 값을 더하기
	// -  : 왼쪽 값에서 오른쪽 값을 빼기
	// * : 왼쪽 값과 오른쪽 값을 곱하기
	// / : 왼쪽 값을 오른쪽 값으로 나누기
	// % : 왼쪽 값을 오른쪽 값으로 나눈 나머지

	// page74
	int num1 = 7, num2 = 3;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);			// ctrl + d : 같은 값 밑으로 복사
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);


	return 0;
}