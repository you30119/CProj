#include <stdio.h>
#include <string.h>

// 원산지, 가격, 바리스타 이름을 멤버변수를 갖는 coffee 구조체를 정의하기
struct coffee {
	char barista[50];
	char origin[50];
	int price;

};

int main4() {
	// 교재 295p #1
	// 구조체 사용
	struct coffee coffee1 = { "홍길동", "케냐", 5000 };
	sprintf(coffee1.origin, "캐나다");
	// 홍길동은 000커피를 00원에 판매합니다.
	printf("%s는 %s커피를 %d원에 팝니다.\n", coffee1.barista, coffee1.origin, coffee1.price);

	return 0;
}