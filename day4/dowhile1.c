#include <stdio.h>

int main5() {
	// 반복문 while
	// 128p

	int num = -1;

	//while (num != -1) {						// 조건이 맞으면 아무 것도 실행되지 않음
	//	printf("숫자를 입력하세요(-1 입력시 종료) : ");
	//	scanf("%d", &num);
	//	if (num == -1)
	//		printf("종료합니다.\n");			// 한줄일 때는 {} 생략 가능
	//	else
	//		printf("%d을(를) 입력하셨네요.\n", num);
	//}

	// do~while : 1번은 무조건 실행이 되게 해주는 while문
	do {
		printf("숫자를 입력하세요(-1 입력시 종료) : ");
			scanf("%d", &num);
			if (num == -1)
				printf("종료합니다.\n");			// 한줄일 때는 {} 생략 가능
			else
				printf("%d을(를) 입력하셨네요.\n", num);
	} while (num != -1);
	

	return 0;
}