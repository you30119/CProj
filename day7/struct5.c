#include <stdio.h>
#include <string.h>

// ��Ÿũ����Ʈ ���� (�̸�, ü��, ���ݷ�, ����)
struct Unit
{
	char name[100];
	int hp;
	int atk;
	int def;
};

// typedef ���� ������ �༭ ���θ��� ����� �� �ִ�.
// typedef : �ڷ����� �̸��� ���� ���ϴ� Ű����� ġȯ (�����ֱ�)
typedef struct Building
{
	char name[100];
	int hp;
} �ǹ�;			// struct Building -> �ǹ�

int main5() {
	struct Unit ���۸� = { "���۸�", 35, 5, 0 };
	struct Unit ���� = { "����", 40, 6, 0 };
	struct Unit ���� = { "����", 160, 16, 1 };
	�ǹ� ���� = { "����", 1500 };			// struct Building ==> �ǹ�

	printf("���۸��� ü���� %d\n", ���۸�.hp);

	for (int i = 0; i < 100; i++) {
		���۸�.hp -= ����.atk;
		if (���۸�.hp <= 0) {
			printf("%s die", ���۸�.name);
			break;		// ������ �׸� ������
		}
		else {
			printf("���۸��� ü���� %d\n", ���۸�.hp);
		}
	}

	return 0;
}