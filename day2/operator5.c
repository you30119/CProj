#include <stdio.h>

int main7() {
	// page98 #1
	// ����ڷκ��� ���̸� �Է¹޾� 20�� �̻��̸� 1250��, 20�� �̸��̸� 800���� �޴� ����ö ������� ���α׷� �����
	/*����� ���̴� 26���̸�, ����� 1250���Դϴ�!*/
	/*����� ���̴� 19���̸�, ����� 800���Դϴ�!*/

	int age1 = 0, pay = 0;

	printf("����� ���̸� �Է����ּ���.\n");
	scanf("%d", &age1);

	pay = age1 >= 20 ? 1250 : 800;

	printf("����� ���̴� %d���̸�, ����� %d���Դϴ�!\n\n", age1, pay);


	// page98 #2
	// ����ڷκ��� ���̿� Ű�� �Է¹޾� ���̰� 12�� �̻��̰�, Ű�� 120cm �̻��� ���� ���̱ⱸ ž���� ������ּ���
	/*���̱ⱸ�� ž���� �� �ֽ��ϴ�.*/
	/*���̱ⱸ�� ž���� �� �����ϴ�.*/

	int age2 = 0;
	double height = 0.0;

	printf("����� ���̸� �Է����ּ���.\n");
	scanf("%d", &age2);
	printf("����� Ű�� �Է����ּ���.\n");
	scanf("%lf", &height);

	int condition = 0;

	condition = age2 >= 12 && height >= 120.0;

	condition == 1 ? printf("���̱ⱸ�� ž���� �� �ֽ��ϴ�\n") : printf("���̱ⱸ�� ž���� �� �����ϴ�\n");


	return 0;
}