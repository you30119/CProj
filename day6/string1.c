// string : 문자열 (char들을 붙여놓음
#include <stdio.h>
#include <string.h>

// <stdio.h> : 입력 및 출력 관련 기능들을 제공
// <string.h> : 문자열 관련된 기능(함수)들을 제공
int main2() {
	// 교재 201p
	char good[] = "Good!";			// 6칸
	char* bad = "Bad!";		// 5칸		const : 변경 불가능하게 바꾸기 (상수화) char* 권장하지않음
	printf("%s %s\n", good, bad);			// Good! Bad!

	// 배열로 만든 문자열
	good[0] = 'H';
	//good = "New Good!";			// 컴파일 에러 (배열 문자열은 일괄 수정 불가능)

	// 포인터로 만든 문자열
	bad = "New Bad!";
	//bad[0] = 'S';				// 포인터 문자열에서 개별수정 불가능 (무시)

	printf("%s %s\n", good, bad);		// Hood! New Bad!

	// 교재 205p
	char str1[50] = "apple is good";
	char str2[50] = "berry is good";
	char str3[50];
	char str4[50];

	int str1_len = strlen(str1);			// str1의 문자 갯수를 알려줌
	int str2_len = strlen(str2);			// 문자 갯수 (마지막 \0 제외)

	printf("str1의 길이 : %d, str2의 길이: %d\n", str1_len, str2_len);

	// 문자열 복붙
	strcpy(str3, str1);

	printf("%s\n", str3);

	// 원하는 갯수만큼만 복붙
	strncpy(str4, str1, 5);			// 5글자만 복붙 str1-> str5

	printf("%s\n", str4);

	// sprintf
	sprintf(str4, "내가 원하는 문자열 : %s", str1);
	printf("%s\n", str4);

	// 교재 207p
	char str5[50] = "Michael ";
	char str6[50] = "Michael ";

	// 문자열 이어붙이기 strcat
	strcat(str5, "Bolton");
	printf("%s\n", str5);

	strncat(str6, "Jackson Five", 7);			// 원하는 글자(7글자)만 이어붙이기
	printf("%s\n", str6);

	// strcmp : 두 문자열을 비교 (문자열은 ==가 안됨), 같다면 0이라고 알려줌(반환)
	if (strcmp("안녕", "안녕") == 0) {
		printf("같다\n");
	}
	else {
		printf("다르다\n");
	}

	// str5와 str6을 비교
	printf("비교 결과 : %d\n", strcmp(str5, str6));			// str5 : Michael Bolton

	// str5와 str6을 7글자만 비교
	printf("비교 결과 : %d\n", strncmp(str5, str6, 7));		// str6 : Michael Jackson

	printf("str6을 입력>>");
	scanf("%[^\n]s", str6);		// scanf로 띄어쓰기까지 입력
	printf("비교 결과 : %d\n", strcmp(str5, str6));			// str5 : Michael Bolton

	return 0;
}