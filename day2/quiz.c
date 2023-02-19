#include <stdio.h>

int main5() {
	// page 85
	// 2. 모두 1을 출력할 수 있도록
	int num1 = 27;

	printf("%d\n", num1 > 10);			// 1
	printf("%d\n", num1 != 5);

	printf("%d\n", num1 >= 27);
	printf("%d\n", num1 == 27);				// 1

	printf("%d\n", num1 < 30);				// 1
	printf("%d\n\n", num1 <= 27);

	// page 86
	// 3. 국어=86, 영어=75, 수학=88, 사회=60, 과학=96
	// 평균 구하기 (소수점까지)
	int kor = 86, eng = 75, math = 88, society = 60, science = 96;
	double avg = ((double)kor + eng + math + society + science) / 5;
	printf("과목 평균 : %lf\n\n", avg);

	// page 86
	// 4. 증감연산자 사용
	// 각 num에 증감연산자를 적절히 사용하여 6 6 8 결과 출력 ++, --
	int num = 5;
	printf("%d\n", ++num);			// 6
	printf("%d\n", num++);			// 6
	printf("%d\n", ++num);			// 8

	return 0;
}