#include <stdio.h>

int main4() {
	// 1. 대입 연산자
	// 2. 산술 연산자
	// 3. 누적 연산자
	// 4. 증감 연산자
	
	// 5. 비교 연산자
	// 비교식을 제시하면 맞을 때는 1, 틀릴 때는 0 이라고 알려줌
	// >, <, >=, <=, ==, != (크다, 작다, 크거나 같다, 작거나 같다, 같다, 다르다)
	int num1 = 10, num2 = 11;

	printf("== : %d\n", num1 == num2);		// 같다	비교식이 틀리기 때문에 결과 값이 0
	printf("> : %d\n", num1 > num2);			// 왼쪽이 크다
	printf("< : %d\n", num1 < num2);			// 왼쪽이 작다
	printf(">= : %d\n", num1 >= num2);		// 왼쪽이 크거나 같다
	printf("<= : %d\n", num1 <= num2);		// 왼쪽이 작거나 같다
	printf("!= : %d\n\n", num1 != num2);		// 다르다

	// 6. 관계 연산자
	// &&, ||, ! (AND, OR, NOT)
	// && : AND, 양쪽이 모두 맞으면 1, 하나라도 틀리면 0
	printf("&& : %d\n", num1 != num2 && num1 == 11);			// 양쪽이 둘 다 맞을 때만 1

	// || : OR, 둘 중 하나라도 맞으면 1, 둘 다 틀릴때만 0
	printf("|| : %d\n", num1 == num2 || num2 == 11);			// 하나라도 맞으면 1
	
	// ! : NOT, 0은 1로 바꾸고, 0 이외의 숫자는 0으로 바꿈
	// 틀린건 맞도록, 맞는건 틀리도록 반전
	printf("! : %d\n", !(num1 == 10));
	

	// 7. 삼항 연산자
	// 8. 비트 연산자
	// 9. 쉬프트 연산자

	return 0;
}