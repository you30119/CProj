#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main0() {
	// ��� printf
	printf("hello world\n");

	// // ���� �ּ� (�� ���� �ڵ尡 �ƴ϶� �޸�� ���, Ctrl + Shift + /)
	// /**/ ���� �� �ּ�
	/*
		�ȳ��ϼ���
		�ݰ����ϴ�
		���� �� �ּ� �Դϴ�
	*/

	// �Լ�, ��� ������ �� /**/ ������ �ּ� ���� ���
	// �ڵ� �ּ�ó�� �Ҷ� // ���� ���

	// Ctrl + Z �ڷ� ����
	// Ctrl + Y �ڷ� ���� ���

	// ����(variable) : ���� ����
	// ���� ���� (������ ����� ���)
	// �ڷ��� ������;
	char word;					// ������ ���� ����		(1 byte == 8 bit)
	int number;				// ������ ���� ����		(4 byte)
	double dNumber;		// �Ǽ��� ���� ����		(8 byte)
	char str[256];			// ���ڿ��� ���� ����	(1 �� 256 byte)

	// ������ ���� ���� (���� ������)
	// ������ = ���� ������ ��;
	word = 'q';
	number = -3;
	dNumber = 3.141592;
	sprintf(str, "hi world");
	
	// ���� �ʱ�ȭ (���� ����� ���ÿ� ���Ա���)
	char str2[256] = "hello world";

	// ���� ���
	int number2 = number;			// number�� ����ִ� ���� ��� (�ڷ������� �����ֱ�)
	printf("������ : %c\n", word);
	printf("������ : %d\n", number);
	printf("�Ǽ��� : %lf\n", dNumber);
	printf("���ڿ��� : %s\n\n", str2);

	// + : ���ϱ�
	// - : ����
	// * : ���ϱ� 
	// / : ������
	// % : ������ ���ϱ�

	// ������ �Ǵ� �Ǽ��� ���� 2���� �����
	// +, -, *, /, % ����ϰ� printf�� ����ϱ�
	int num1 = 9, num2 = 4;
	int sum = 0, sub = 0, mul = 0, rest = 0;
	double div = 0.0;

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = (double)num1 / num2;
	rest = num1 % num2;
	
	printf("���� : %d, %d\n", num1, num2);
	printf("�� ���� ���ϸ� : %d\n", sum);
	printf("�� ���� ���� : %d\n", sub);
	printf("�� ���� ���ϸ� : %d\n", mul);
	printf("�� ���� ������ : %.2lf\n", div);
	printf("�� �� ������ �� �������� : %d\n", rest);

	return 0;
}