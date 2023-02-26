#include <stdio.h>

int main1() {
	// 반복문 while, for
	// 중복되거나 유사한 코드를 줄이기 위해서

	// while() {}
	// 1. 몇 번 썼는지 알 수 없음, 일일히 갯수를 세야됨
	// 2. 갯수가 너무 많아지면 (10000개 이상) 사람이 작업할 수 없음
	// ==> 반복문 문법을 도입
	char name[] = "홍길동";
	printf("%s은 잘생겼다.\n", name);
	printf("%s은 잘생겼다.\n", name);
	printf("%s은 잘생겼다.\n", name);
	printf("%s은 잘생겼다.\n", name);
	printf("%s은 잘생겼다.\n", name);
	printf("%s은 잘생겼다.\n", name);
	printf("%s은 잘생겼다.\n", name);

	return 0;
}