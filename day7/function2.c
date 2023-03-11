#include <stdio.h>

typedef struct numbers
{
	int num1;
	int num2;
	int num3;
} NUM;

// 숫자 2개를 입력받아 합쳐서 return
int MyFunc2(int num1, int num2, int num3) {			// 변경 사항 : 3개를 입력받아서 3개를 더해야겠다.
	// 매개변수의 자료형이 바뀌거나 갯수가 바뀌게 되면 함수를 사용하는 곳에서도 코드를 바꿔야함
	int result = num1 + num2 + num3;
	return result;
}

int MyFunc2_1(NUM n) {
	int result = n.num1 + n.num2 + n.num3;
	return result;
}

int main8() {
	NUM n4 = { 1, 2 };
	NUM n5 = { 1, 2, 3 };
	int n1 = 1, n2 = 2, n3 = 3;
	int result = MyFunc2(n1, n2, n3);			// 사용하는 곳에서도 바꿔야 함 ==> 구조체
	printf("결과는 : %d\n", result);

	 result = MyFunc2(n2, n3, n1);				// 사용하는 곳에서도 바꿔야 함 ==> 구조체
	printf("결과는 : %d\n", result);

	result = MyFunc2_1(n4);			
	printf("결과는 : %d\n", result);

	result = MyFunc2_1(n5);				// 매개 변수를 구조체로 변경
	printf("결과는 : %d\n", result);


	return 0;
}