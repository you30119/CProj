#include <stdio.h>
#include <string.h>

int main3() {
	// 교재 209p
	// #1
	// 두 개의 문자열을 입력받아 같은지 같지 않은지 알려주는 프로그램 "%[^\n]s"
	/*
	리오넬 메시
	리오넬 메시
	==> 같습니다

	리오넬 메시
	호날두
	==> 같지 않습니다
	*/
	char str1[50] = {" ", };
	char str2[50] = { " ", };
	
	printf("첫번째 문자 입력 : ");
	scanf("%[^\n]s", str1);
	rewind(stdin);
	printf("두번째 문자 입력 : ");
	scanf("%[^\n]s", str2);
	
	if (strcmp(str1, str2) == 0) {
		printf("같습니다.\n");
	}
	else
		printf("같지 않습니다.\n");

	// #2
	// 위 입력받은 문자열 중 길이가 긴 문자열부터 출력하게 해주세요
	/*
	리오넬 메시
	호날두
	==> 리오넬 메시 호날두
	*/
	char str3[50] = { " ", };
	char str4[50] = { " ", };

	rewind(stdin);
	printf("첫번째 문자 입력 : ");
	scanf("%[^\n]s", str3);
	rewind(stdin);
	printf("두번째 문자 입력 : ");
	scanf("%[^\n]s", str4);

	if (strlen(str3) > strlen(str4)) {
		printf("%s\n%s\n", str3, str4);
	}
	else {
		printf("%s\n%s\n", str4, str3);
	}


	return 0;
}