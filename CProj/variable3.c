#include <stdio.h>

int main4() {
	//�ۼ���: ������
	//�ۼ���¥ : 2023 - 02 - 18
	//��� : printf�� ���ڿ� ���

	// �̸�, �⵵, ��, ��, f ==> ����
	// ���ڿ�[]���� : �̸�			%s
	// �������� : �⵵, ��, ��		%d
	// ���ں��� : f						%c

	char name[] = "ȫ�浿";
	int year = 2023;
	int month = 2;
	int day = 18;
	char function[] = "printf�� ���ڿ� ���";
	char word = 'f';

	printf("�ۼ��� : %s\n", name);
	printf("�ۼ� ��¥ : %d-%02d-%d\n", year, month, day);
	printf("��� : %s\n", function);
	printf("%c\n", word);

	return 0;
}