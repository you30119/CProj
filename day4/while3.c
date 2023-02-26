#include <stdio.h>

int main3() {
	// while문
	// while () {}
	// 무한반복 ==> 내가 원하는 횟수 반복(플래그, 기준점 활용)
	int i = 0;			// 플래그(기준점)
	
	while (i < 5) {
		printf("홍길동\n");
		i++;				// 플래그를 통해서 반복 횟수를 조정할 수 있다
	}

	// 127p
	int num = 0;		// 플래그
	while (num < 3) {
		printf("num is %d now\n", num);
		num++;
	}

	return 0;
}