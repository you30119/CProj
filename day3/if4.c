#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	// page122 #2
	// 정수를 입력받아서 홀수인지 짝수인지 판별
	int num = 0;

	printf("정수를 입력해주세요.\n");
	scanf("%d", &num);

	if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else
		printf("홀수입니다.\n");

	// page123 #3
	// 나이에 따른 지하철 요금표, 나이를 입력하면 요금을 안내해주는 프로그램
	/*
	6세미만, 65세이상 : 0원
	6세이상, 13세미만 : 500원
	13세이상, 19세미만 : 900원
	19세 이상, 65세 미만 : 1250원
	*/
	int age = 0;

	printf("나이를 입력해주세요.\n");
	scanf("%d", &age);

	if (age < 6 || age >= 65) {						// 범위에 맞게 ||, && 연산자 적절히 사용하기
		printf("요금은 0원입니다.\n");
	}
	else if (age >= 6 && age < 13) {
		printf("요금은 500원입니다.\n");
	}
	else if (age >= 13 && age < 19) {
		printf("요금은 900원입니다.\n");
	}
	else
		printf("요금은 1250원입니다.\n");

	// page124 #4
	// 중간고사 평균을 구하고 점수에 따라서 switch로 학점을 부여
	// 90이상 A, 80이상 B, 70이상 C, 60이상 D, 60미만 F
	// 국어88, 영어90, 수학58, 사회81, 과학72
	int kor = 88, eng = 90, math = 58, society = 81, science = 72;
	int sum = 0;
	double avg = 0;

	sum = kor + eng + math + society + science;
	avg = sum / 5.0;

	// switch는 실수x
	switch ((int)avg / 10) {
	case 10:
		printf("평균 100점, A학점\n");
		break;
	case 9 :
		printf("평균 90점 이상, A학점\n");
		break;
	case 8:
		printf("평균 80점 이상, B학점\n");
		break;
	case 7:
		printf("평균 70점 이상, C학점\n");
		break;
	case 6:
		printf("평균 60점 이상, D학점\n");
		break;
	default :
		printf("평균 60점 미만, F학점\n");
	}

	// 윤년 구하는 프로그램 만들기
	// 윤년 : 연도가 4의 배수이면서 100의 배수가 아닌 연도 
	//			 또는 400의 배수인 연도
	// 2000년 => 윤년
	// 2100년 => 윤년 아님
	// 2200년 => 윤년 아님
	// 2203년 => 윤년
	// 2204년 => 윤년
	// 2400년 => 윤년
	// 윤년이면 2월이 29일로 끝남
	// 연도를 입력하면 해당 연도가 윤년인지 판별해주는 프로그램을 만들기

	int year = 0;

	printf("연도를 입력해주세요.\n");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("윤년\n");
	}
	else
		printf("윤년이 아닙니다.\n");
	return 0;
}