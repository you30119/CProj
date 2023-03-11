#include <stdio.h>

typedef struct target
{
	int num1;
	int num2;
} T;

void Swap(T* t)
{
	int temp = (*t).num1;
	(*t).num1 = (*t).num2;
	(*t).num2 = temp;
}

void Swap2(T* t)
{
	int temp = t->num1;
	t->num1 = t->num2;			// ��ȣ�� �ʹ� ���� �������ϴ� 'ȭ��ǥ'�� �ٲ�
	t->num2 = temp;
}

int main() {
	// C��� : �Լ� + ����ü + ������
	T t1 = { 1, 2 };
	T t2 = { 3, 4 };
	T* p_t2 = &t2;
	printf("���� �� %d, %d\n", t1.num1, t1.num2);

	Swap(&t1);			// t1 ����ü������ ��ġ(�ּҰ�)�� �Ѱ��ش�

	printf("���� �� %d, %d\n", t1.num1, t1.num2);

	printf("====================\n");

	// ����ü ������ ������ ����ϱ� ���ؼ� -> �� ����Ѵ�.
	printf("���� �� %d, %d\n", p_t2->num1, p_t2->num2);

	Swap(p_t2);			// �ּҸ� �ѱ�

	printf("���� �� %d, %d\n", p_t2->num1, p_t2->num2);

	return 0;
}