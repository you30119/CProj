#include <stdio.h>

int main5() {
	// page 85
	// 2. ��� 1�� ����� �� �ֵ���
	int num1 = 27;

	printf("%d\n", num1 > 10);			// 1
	printf("%d\n", num1 != 5);

	printf("%d\n", num1 >= 27);
	printf("%d\n", num1 == 27);				// 1

	printf("%d\n", num1 < 30);				// 1
	printf("%d\n\n", num1 <= 27);

	// page 86
	// 3. ����=86, ����=75, ����=88, ��ȸ=60, ����=96
	// ��� ���ϱ� (�Ҽ�������)
	int kor = 86, eng = 75, math = 88, society = 60, science = 96;
	double avg = ((double)kor + eng + math + society + science) / 5;
	printf("���� ��� : %lf\n\n", avg);

	// page 86
	// 4. ���������� ���
	// �� num�� ���������ڸ� ������ ����Ͽ� 6 6 8 ��� ��� ++, --
	int num = 5;
	printf("%d\n", ++num);			// 6
	printf("%d\n", num++);			// 6
	printf("%d\n", ++num);			// 8

	return 0;
}