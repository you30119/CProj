#include <stdio.h>

int main7() {
	// 교재 168~170p
	// #1
	int a = 10;				// 변수 a에 10 담아서 만듬
	int *p = &a;			// 포인터 변수 p에 a의 주소를 담아서 만듬
	*p = 20;				// 역참조해서 20을 넣었으므로 a에 20이 들어감
	printf("%d", a);		
	*p = 50;				// 역참조해서 50을 넣었으므로 a에 50이 들어감
	printf("%d", a);		
	// 출력 결과 : 2050

	// #2
	printf("\n");
	int number = 10;
	int* pnumber = &number;

	printf("값 : %d\n", *pnumber);
	printf("주소 : %p\n", pnumber);

	// #3 코드 완성하기
	int *ptr;
	int num1 = 5;
	int num2 = 8;

	// ToDo : 코드를 완성해주세요
	ptr = &num1;
	printf("%d\n", *ptr);			// 5
	
	// ToDo : 코드를 완성해주세요
	ptr = &num2;
	printf("%d\n", *ptr);			// 8

	// #4 코드 완성하기
	int n1 = 100, n2 = 200;
	int *ptr1 = &n1, *ptr2 = &n2;
	printf("%d %d\n", *ptr1, *ptr2);			// 100 200

	// ToTo : 여기에 코드 작성
	ptr1 = &n2;
	ptr2 = &n1;
	printf("%d %d\n", *ptr1, *ptr2);			// 200 100

	return 0;
}