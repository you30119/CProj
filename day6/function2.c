#include <stdio.h>

// �Լ��� ���� : �Է°�, ��ȯ��, �ڷ���
// �ڷ��� �Լ���(){}
// �Է°� ���� ����, return�� ���� ����, �ڷ����� return���� ���󰣴�
// �Է°��� ()�� ������ �غ� �صΰ�, ������ {}�� �Է��Ѵ�

// �Է°�X, ��ȯ��X
void First() {
	// return�� ���� ���̱� ������ ����, �ڷ����� void
	// �Է°� �ȹ��� ���̱� ������ ()�� �����
	// ����ڰ� First �Լ��� ������� �� ������ �ڵ带 ����
	char str[64];
	printf("ù��° �Լ� ���!\n");
	scanf("%s", str);
	printf("���� �Է��� ���ڿ���>> %s", str);
}

// �Է°�O, ��ȯ��X
void Second(char* str) {
	printf("\n���� ������ ���ڿ�>> %s\n", str);
}

// �Է°�X, ��ȯ��O
char* Third() {
	char ss[50] = { 0, };
	printf("�Է��� ���ڿ��� ��������>>");
	scanf("%s", ss);
	return ss;
}

// �Է°�O, ��ȯ��O
int Fourth(int n1, int n2, int n3) {			// ���޹ް��� �ϴ� ��ŭ ������ �����س���
	printf("���޹��� �� : %d %d %d ", n1, n2, n3);
	printf("�� �����ݴϴ�\n");
	int result = n1 + n2 + n3;
	return result;			// �Լ��� ���� �ڷ����� return ���� �ڷ����� �����ϰ�
}

int main5() {
	First();			// �Լ��� ���� (�Է�X, ��ȯX)

	Second("���ڿ�");		// �Է�O, ��ȯX (�Է°��� ()�� ���ؼ� ����)

	char* str = Third();		// �Է�X, ��ȯO (��ȯ���� ������ ������ �ްų� ����ó�� ����Ѵ�)
	printf("��ȯ���� �� : %s\n", str);
	printf("��ȯ���� �� : %s\n", Third());
	
	int result = Fourth(5, 7, -2);			// �Է�O, ��ȯO
	printf("����� : %d\n", result);
	printf("����� : %d\n", Fourth(1, 1, -1));


	return 0;
}