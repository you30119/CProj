#include <stdio.h>
#include <string.h>

typedef struct worker {
	char* name;
	char* number;
	int money;
} WORKER;


int main6() {
	// ���� 295p #2 #3
	// ����ü worker�� ����� ������ WORKER�� �ο�
	// ������� : �̸�(char*), ��ȭ��ȣ(char*), ����(int)


	// ����ü ��� (3��¥�� �迭)
	WORKER ����[3] = {
		{"���ӽ�", "010-1111-2222", 3000000},
		{"�ص�", "010-3333-4444", 4000000},
		{"�׸�", "010-5555-4444", 5000000}
	};

	for (int i = 0; i < sizeof(����) / sizeof(WORKER); i++) {
		printf("�̸� : %s, ��ȭ��ȣ : %s, �� �޿� : %d\n", ����[i].name, ����[i].number, ����[i].money);
	}

	return 0;
}