#include <stdio.h>

int main2() {
	int num1, num2;

	// num1�� �Է¹���
	printf("num1�� ���� �Է��ϼ���>>");
	scanf("%d", &num1);

	// num2�� �Է¹���
	printf("num2�� ���� �Է��ϼ���>>");
	scanf("%d", &num2);

	// ��� ������ (���� ����� ���ִ� ��ȣ)
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d �� %d = %d\n", num1, num2, num1 * num2);
	printf("%d �� %d = %.2lf\n", num1, num2, (double)num1 / num2);
	printf("%d�� %d�� ���� �������� %d\n", num1, num2, num1 % num2);

	return 0;
}