#include <stdio.h>

// 정수 2개를 전달받아 더 큰 정수를 반환 (같으면 0 반환)
int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n2 > n1) {
		return n2;
	}
	else {
		return 0;
	}
}
// 두 개의 정수 덧셈, 뺄셈, 곱셈, 나눗셈 결과 모두 출력하는 함수
void calculator(int n1, int n2) {
	int add = n1 + n2;
	int sub = n1 - n2;
	int mul = n1 * n2;
	double div = (double)n1 / n2;
	printf("덧셈 결과 : %d\n", add);
	printf("뺄셈 결과 : %d\n", sub);
	printf("곱셈 결과 : %d\n", mul);
	printf("나눗셈 결과 : %.1lf\n", div);
}

// 두 정수 사이의 모든 숫자 합 반환하는 함수
int AllSum(int n1, int n2) {
	int result = 0;
	if (n1 > n2) {
		int temp = 0;
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (int i=n1+1; i < n2; i++) {
		result += i;
	}
	printf("두 정수 사이의 모든 숫자 합 : %d\n", result);
	return result;
}

// 7의 배수의 갯수 반환하는 함수
int Qty7(int num) {
	int range = num + 200;
	int count = 0;
	for (int i = num; i <= range; i++) {
		if (i % 7 == 0) {
			count++;
		}
	}
	printf("%d과 %d사이 7의 배수는 %d개입니다!\n", num, range, count);
	return count;
}

// 키 cm -> m 반환하는 함수
double change(int height) {
	double result = height / 100.0;
	printf("결과 : %.2lfm\n", result);
	return result;
}

// 초를 입력받아 시/분/초 형태로 출력
int time(sec) {
	int min = 0, hr = 0;

	hr = sec / 3600;
	min = (sec % 3600) / 60;
	sec = (sec % 3600) % 60;

	printf("%d시간/%d분/%d초\n", hr, min, sec);
}

int main() {
	// 교재 228p
	int result;			// 결과를 저장할 변수

	result = getBigger(3, 5);			// 3과 5를 비교
	printf("첫번째 결과 : %d\n", result);

	result = getBigger(8, 2);			// 8과 2를 비교
	printf("두번째 결과 : %d\n", result);

	result = getBigger(4, 4);			// 4와 4를 비교
	printf("세번째 결과 : %d\n", result);

	// 교재 237p
	// #1
	// 두 개의 정수를 매개 변수로 입력받아 두 정수의 덧셈, 뺄셈, 곱셈, 나눗셈 결과를 모두 출력하는 함수 정의(반환X)
	// main에서 사용
	calculator(1, 2);

	// #2
	// 두 정수를 매개 변수로 받아 두 정수 사이의 모든 숫자의 합을 반환하는 함수 정의
	// main에서 사용
	/*5와 9사이의 정수의 총 합은 : 21*/
	AllSum(12,8);

	// #3
	// 정수 한개를 매개변수로 받아 그 수보다 200 더 큰 정수 사이 중 7의 배수가 몇 개나 존재하는지 반환해주는 함수 정의
	// 예를 들어, 100을 전달받으면 100~300 사이의 7의 배수의 갯수 반환
	Qty7(100);

	// #4
	// 사용자로부터 키(cm)를 입력받아 m단위로 반환하는 함수 정의
	// 키 scanf입력은 main함수에서 진행하고
	// 정의한 함수에서는 매개변수로 받아 m단위로 반환
	// 키를 cm 단위로 입력하세요 : 181cm
	// 결과 1.81m
	int height;
	printf("키를 cm 단위로 입력하세요 : ");
	scanf("%d", &height);
	change(height);

	// #5
	// 초(second)를 입력받아 매개변수로 전달한다.
	// 함수는 전달받은 초를 시/분/초 형태로 출력해주기
	int sec;
	printf("몇 초 : ");
	scanf("%d", &sec);
	time(sec);

	return 0;
}