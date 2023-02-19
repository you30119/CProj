#include <stdio.h>

int main6() {
	// 삼항 연산자
	// 조건에 따라서 내 코드를 다르게 수행하고 싶다
	// 변수 = (비교식) ? 비교식이 맞으면 수행할 코드 : 비교식이 틀리면 수행할 코드;

	// 삼항 연산자 (코드 실행)
	int age = 21;
	(age == 20) ? printf("나이는 20살\n") : printf("나이는 20살이 아님\n");				// 상황에 따라 다른 코드 실행

	// page92
	// 절댓값으로 만들어주기 (마이너스 값이 있다면 곱하기 -1)
	int num, absoulte;

	printf("정수값을 입력하세요>>");
	scanf("%d", &num);			// 문자열 입력이 아니면 & 기호 추가

	// 삼항 연산자 (대입)
	absoulte = (num > 0) ? num : num * -1;			// 상황에 따라 다른 값 대입
	printf("절댓값 : %d\n", absoulte);

	return 0;
}