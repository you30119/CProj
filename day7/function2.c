#include <stdio.h>

typedef struct numbers
{
	int num1;
	int num2;
	int num3;
} NUM;

// ���� 2���� �Է¹޾� ���ļ� return
int MyFunc2(int num1, int num2, int num3) {			// ���� ���� : 3���� �Է¹޾Ƽ� 3���� ���ؾ߰ڴ�.
	// �Ű������� �ڷ����� �ٲ�ų� ������ �ٲ�� �Ǹ� �Լ��� ����ϴ� �������� �ڵ带 �ٲ����
	int result = num1 + num2 + num3;
	return result;
}

int MyFunc2_1(NUM n) {
	int result = n.num1 + n.num2 + n.num3;
	return result;
}

int main8() {
	NUM n4 = { 1, 2 };
	NUM n5 = { 1, 2, 3 };
	int n1 = 1, n2 = 2, n3 = 3;
	int result = MyFunc2(n1, n2, n3);			// ����ϴ� �������� �ٲ�� �� ==> ����ü
	printf("����� : %d\n", result);

	 result = MyFunc2(n2, n3, n1);				// ����ϴ� �������� �ٲ�� �� ==> ����ü
	printf("����� : %d\n", result);

	result = MyFunc2_1(n4);			
	printf("����� : %d\n", result);

	result = MyFunc2_1(n5);				// �Ű� ������ ����ü�� ����
	printf("����� : %d\n", result);


	return 0;
}