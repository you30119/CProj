#include <stdio.h>

// ���� 2���� ���޹޾� �� ū ������ ��ȯ (������ 0 ��ȯ)
int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if (n2 > n1) {
		return n2;
	}
	else {
		return 0;
	}
}
// �� ���� ���� ����, ����, ����, ������ ��� ��� ����ϴ� �Լ�
void calculator(int n1, int n2) {
	int add = n1 + n2;
	int sub = n1 - n2;
	int mul = n1 * n2;
	double div = (double)n1 / n2;
	printf("���� ��� : %d\n", add);
	printf("���� ��� : %d\n", sub);
	printf("���� ��� : %d\n", mul);
	printf("������ ��� : %.1lf\n", div);
}

// �� ���� ������ ��� ���� �� ��ȯ�ϴ� �Լ�
int AllSum(int n1, int n2) {
	int result = 0;
	if (n1 > n2) {
		int temp = 0;
		temp = n1;
		n1 = n2;
		n2 = temp;
	}
	for (int i=n1+1; i < n2; i++) {
		result += i;
	}
	printf("�� ���� ������ ��� ���� �� : %d\n", result);
	return result;
}

// 7�� ����� ���� ��ȯ�ϴ� �Լ�
int Qty7(int num) {
	int range = num + 200;
	int count = 0;
	for (int i = num; i <= range; i++) {
		if (i % 7 == 0) {
			count++;
		}
	}
	printf("%d�� %d���� 7�� ����� %d���Դϴ�!\n", num, range, count);
	return count;
}

// Ű cm -> m ��ȯ�ϴ� �Լ�
double change(int height) {
	double result = height / 100.0;
	printf("��� : %.2lfm\n", result);
	return result;
}

// �ʸ� �Է¹޾� ��/��/�� ���·� ���
int time(sec) {
	int min = 0, hr = 0;

	hr = sec / 3600;
	min = (sec % 3600) / 60;
	sec = (sec % 3600) % 60;

	printf("%d�ð�/%d��/%d��\n", hr, min, sec);
}

int main() {
	// ���� 228p
	int result;			// ����� ������ ����

	result = getBigger(3, 5);			// 3�� 5�� ��
	printf("ù��° ��� : %d\n", result);

	result = getBigger(8, 2);			// 8�� 2�� ��
	printf("�ι�° ��� : %d\n", result);

	result = getBigger(4, 4);			// 4�� 4�� ��
	printf("����° ��� : %d\n", result);

	// ���� 237p
	// #1
	// �� ���� ������ �Ű� ������ �Է¹޾� �� ������ ����, ����, ����, ������ ����� ��� ����ϴ� �Լ� ����(��ȯX)
	// main���� ���
	calculator(1, 2);

	// #2
	// �� ������ �Ű� ������ �޾� �� ���� ������ ��� ������ ���� ��ȯ�ϴ� �Լ� ����
	// main���� ���
	/*5�� 9������ ������ �� ���� : 21*/
	AllSum(12,8);

	// #3
	// ���� �Ѱ��� �Ű������� �޾� �� ������ 200 �� ū ���� ���� �� 7�� ����� �� ���� �����ϴ��� ��ȯ���ִ� �Լ� ����
	// ���� ���, 100�� ���޹����� 100~300 ������ 7�� ����� ���� ��ȯ
	Qty7(100);

	// #4
	// ����ڷκ��� Ű(cm)�� �Է¹޾� m������ ��ȯ�ϴ� �Լ� ����
	// Ű scanf�Է��� main�Լ����� �����ϰ�
	// ������ �Լ������� �Ű������� �޾� m������ ��ȯ
	// Ű�� cm ������ �Է��ϼ��� : 181cm
	// ��� 1.81m
	int height;
	printf("Ű�� cm ������ �Է��ϼ��� : ");
	scanf("%d", &height);
	change(height);

	// #5
	// ��(second)�� �Է¹޾� �Ű������� �����Ѵ�.
	// �Լ��� ���޹��� �ʸ� ��/��/�� ���·� ������ֱ�
	int sec;
	printf("�� �� : ");
	scanf("%d", &sec);
	time(sec);

	return 0;
}