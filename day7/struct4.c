#include <stdio.h>
#include <string.h>

// ������, ����, �ٸ���Ÿ �̸��� ��������� ���� coffee ����ü�� �����ϱ�
struct coffee {
	char barista[50];
	char origin[50];
	int price;

};

int main4() {
	// ���� 295p #1
	// ����ü ���
	struct coffee coffee1 = { "ȫ�浿", "�ɳ�", 5000 };
	sprintf(coffee1.origin, "ĳ����");
	// ȫ�浿�� 000Ŀ�Ǹ� 00���� �Ǹ��մϴ�.
	printf("%s�� %sĿ�Ǹ� %d���� �˴ϴ�.\n", coffee1.barista, coffee1.origin, coffee1.price);

	return 0;
}