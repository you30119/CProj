#include <stdio.h>
#include <string.h>

typedef struct worker {
	char* name;
	char* number;
	int money;
} WORKER;


int main6() {
	// 교재 295p #2 #3
	// 구조체 worker를 만들고 별명을 WORKER로 부여
	// 멤버변수 : 이름(char*), 전화번호(char*), 월급(int)


	// 구조체 사용 (3개짜리 배열)
	WORKER 직원[3] = {
		{"제임스", "010-1111-2222", 3000000},
		{"앤디", "010-3333-4444", 4000000},
		{"테리", "010-5555-4444", 5000000}
	};

	for (int i = 0; i < sizeof(직원) / sizeof(WORKER); i++) {
		printf("이름 : %s, 전화번호 : %s, 월 급여 : %d\n", 직원[i].name, 직원[i].number, 직원[i].money);
	}

	return 0;
}