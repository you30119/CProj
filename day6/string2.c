#include <stdio.h>
#include <string.h>

int main3() {
	// ���� 209p
	// #1
	// �� ���� ���ڿ��� �Է¹޾� ������ ���� ������ �˷��ִ� ���α׷� "%[^\n]s"
	/*
	������ �޽�
	������ �޽�
	==> �����ϴ�

	������ �޽�
	ȣ����
	==> ���� �ʽ��ϴ�
	*/
	char str1[50] = {" ", };
	char str2[50] = { " ", };
	
	printf("ù��° ���� �Է� : ");
	scanf("%[^\n]s", str1);
	rewind(stdin);
	printf("�ι�° ���� �Է� : ");
	scanf("%[^\n]s", str2);
	
	if (strcmp(str1, str2) == 0) {
		printf("�����ϴ�.\n");
	}
	else
		printf("���� �ʽ��ϴ�.\n");

	// #2
	// �� �Է¹��� ���ڿ� �� ���̰� �� ���ڿ����� ����ϰ� ���ּ���
	/*
	������ �޽�
	ȣ����
	==> ������ �޽� ȣ����
	*/
	char str3[50] = { " ", };
	char str4[50] = { " ", };

	rewind(stdin);
	printf("ù��° ���� �Է� : ");
	scanf("%[^\n]s", str3);
	rewind(stdin);
	printf("�ι�° ���� �Է� : ");
	scanf("%[^\n]s", str4);

	if (strlen(str3) > strlen(str4)) {
		printf("%s\n%s\n", str3, str4);
	}
	else {
		printf("%s\n%s\n", str4, str3);
	}


	return 0;
}