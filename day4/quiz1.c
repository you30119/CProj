#include <stdio.h>

int main12() {
	// 교재 143p #1 #2

	// #1
	// 사용자가 1 이상의 정수 n을 입력하면 1부터 n까지의 합을 구하는 프로그램을 만드세요
	int i = 0, n = 0;
	int sum = 0;

	printf("정수를 입력하세요. : ");
	scanf("%d", &n);

	while (i < n) {
		i++;
		sum += i;
	}
	printf("1부터 %d까지의 합은 %d입니다.\n", n, sum);

	// #2
	// 1부터 100까지의 정수 중 6의 배수만 출력하는 프로그램 만들기

	for (i = 1; i <= 100; i++) {
		if (i % 6 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	for (i = 0; i < 100; i++) {
		if (i == 0)
			continue;
		else if (i % 6 == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");

	// #3
	// 아스키코드(교재 345~346p) : 각 문자에 할당된 정수값
	// 알파벳을 입력받아 출력하는 프로그램 (단, 대문자면 프로그램 종료)
	// 65~90 : 대문자, 97~122 : 소문자

	char word = 0;
	0 == '\0';			// 아스키 코드로 0은 빈 값을 의미한다

	word = 'a';
	word = 97;		// 아스키 코드 a

	word = 'z';
	word = 122;		// 아스키 코드 z

	word = 'A';
	word = 65;		// 아스키 코드 A

	word = 'Z';
	word = 90;		// 아스키 코드 Z

	while (1) {
		printf("알파벳을 입력하세요 : ");
		rewind(stdin);		// 버퍼문자 제거
		scanf("%c", &word);

		if (word >= 65 && word <= 90) {
			printf("%c 입력했습니다. 종료합니다.\n", word);
			break;
		}
		else if (word >= 97 && word <= 122)
			printf("%c 입력했습니다.\n", word);
	}

	return 0;
}