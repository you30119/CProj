#include<stdio.h>

int main9() {
	int kor = 50, eng = 40, math = 60;
	int sum = 0;
	double avg = 0.0;

	// �հ� : 000
	// ��� : 00
	sum = kor + eng + math;
	avg = (double)sum / 3;		 //avg = sum / 3.0; �ڷ��� �����ֱ�

	printf("�հ�� %d�� �Դϴ�.\n", sum);
	printf("����� %.1lf�� �Դϴ�.\n", avg);

	return 0;
}