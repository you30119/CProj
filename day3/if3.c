#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3() {
	// if() {} : ()에 있는 조건이 맞을 때만 {}코드 실행
	// if() {} else {} : ()의 조건이 맞을 땐 if의 {}코드 실행, 틀릴 땐 else의 {}코드 실행

	// 숫자가 10보다 작은지, 100보다 작은지, 1000보다 작은지, 1000이상인지 여러개 검사
	int num = 0;
	if (num < 10) {
		printf("10보다 작다\n");
	}
	else if (num < 100) {					// 위의 if가 틀렸을 경우 검사
		printf("100보다 작다\n");
	}
	else if (num < 1000) {				// 위의 if가 틀렸을 경우 검사
		printf("1000보다 작다\n");
	}
	else											// 다 틀렸을 때
		printf("1000이상이다.\n");

	int age = 21;
	if (age > 20) {							// if가 틀렸을 경우엔 if의 {}무시하고 밑에 있는 else if 검사
		printf("성인\n");
	}
	else if (age >= 14) {					// else if(){} : 위에 있는 조건이 틀리면 검사
		printf("청소년\n");
	}
	else
		printf("미성년자\n");

	/*
	if(조건1){
		조건1이 맞을 경우 실행
	}
	else if(조건2){
		조건2가 맞을 경우 실행
	}
	else if(조건3){
		조건3 맞을 경우 실행
	}
	else {
		모든 조건이 틀렸을 때 실행
	}
	*/
	printf("\nQuiz\n");
	int score = 0;
	printf("점수를 입력하세요>>");
	scanf("%d", &score);

	// 90점이상 A, 80점이상 B, 70점이상 C, 60점이상 D, 그 이하 F

	if (score >= 90) {
		printf("A학점\n");
	}
	else if (score >= 80) {
		printf("B학점\n");
	}
	else if (score >= 70) {
		printf("C학점\n");
	}
	else if (score >= 60) {
		printf("D학점\n");
	}
	else
		printf("F학점\n");

	return 0;
}