#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	// 출력 printf
	printf("hello world\n");

	// // 한줄 주석 (이 줄은 코드가 아니라 메모로 취급, Ctrl + Shift + /)
	// /**/ 여러 줄 주석
	/*
		안녕하세요
		반갑습니다
		여러 줄 주석 입니다
	*/

	// 함수, 기능 설명할 때 /**/ 여러줄 주석 많이 사용
	// 코드 주석처리 할때 // 많이 사용

	// Ctrl + Z 뒤로 가기
	// Ctrl + Y 뒤로 가기 취소

	// 변수(variable) : 저장 공간
	// 변수 선언 (변수를 만드는 방법)
	// 자료형 변수명;
	char word;					// 문자형 변수 선언		(1 byte == 8 bit)
	int number;				// 정수형 변수 선언		(4 byte)
	double dNumber;		// 실수형 변수 선언		(8 byte)
	char str[256];			// 문자열형 변수 선언	(1 × 256 byte)

	// 변수에 값을 대입 (대입 연산자)
	// 변수명 = 넣을 데이터 값;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str, "hi world");
	
	// 변수 초기화 (변수 선언과 동시에 대입까지)
	char str2[256] = "hello world";

	// 변수 사용
	int number2 = number;			// number에 들어있는 값을 사용 (자료형없이 적어주기)
	printf("문자형 : %c\n", word);
	printf("정수형 : %d\n", number);
	printf("실수형 : %lf\n", dNumber);
	printf("문자열형 : %s\n\n", str2);

	// + : 더하기
	// - : 빼기
	// * : 곱하기 
	// / : 나누기
	// % : 나머지 구하기

	// 정수형 또는 실수형 변수 2개를 만들고
	// +, -, *, /, % 계산하고 printf로 출력하기
	int num1 = 9, num2 = 4;
	int sum = 0, sub = 0, mul = 0, rest = 0;
	double div = 0.0;

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = (double)num1 / num2;
	rest = num1 % num2;
	
	printf("정수 : %d, %d\n", num1, num2);
	printf("두 수를 더하면 : %d\n", sum);
	printf("두 수를 빼면 : %d\n", sub);
	printf("두 수를 곱하면 : %d\n", mul);
	printf("두 수를 나누면 : %.2lf\n", div);
	printf("두 수 나눴을 때 나머지는 : %d\n", rest);

	return 0;
}