#include<stdio.h>

int main9() {
	int kor = 50, eng = 40, math = 60;
	int sum = 0;
	double avg = 0.0;

	// 합계 : 000
	// 평균 : 00
	sum = kor + eng + math;
	avg = (double)sum / 3;		 //avg = sum / 3.0; 자료형 맞춰주기

	printf("합계는 %d점 입니다.\n", sum);
	printf("평균은 %.1lf점 입니다.\n", avg);

	return 0;
}