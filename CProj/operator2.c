#include <stdio.h>

int main7() {
	// 연산자
	// 1. 대입연산자 =
	// 오른쪽에 있는 데이터 값을 왼쪽에 있는 공간에 담는다.
	int num1;
	num1 = 3;

	int num2 = 4;			// 선언과 동시에 사용도 가능 (초기화)

	num1 = num2;			// 왼쪽(num1) : 공간, 오른쪽(num2) : 값

	num1 = num1;			// 왼쪽의 num1과 오른쪽의 num1이 다름
	// num1 = 4;

	return 0;
}