#include <stdio.h>

int main() {
	// page101 #3, #4, #5 (/, %, 삼항연산자)
	
	// #3
	// 바구니에 복숭아를 10개씩 담을 수 있다.
	// 복숭아 갯수를 사용자로부터 입력받고 바구니 수를 출력하자
	// 예를 들어, 복숭아 16개를 입력받으면 바구니 2개가 필요
	// 복숭아 157개를 입력받으면 바구니 16개가 필요
	int peach = 0, basket = 0;
	
	printf("복숭아 갯수를 입력해주세요.\n");
	scanf("%d", &peach);

	basket = peach % 10 == 0 ? peach / 10 : (peach / 10) + 1;

	printf("필요한 바구니 수 : %d\n\n", basket);

	// #4
	// 실수형 변수에 값을 입력받고 1의 자리 숫자만 출력하는 프로그램 만들기
	// 예를 들어, 126.12	=>	6
	// 33.14		=>	3
	double num = 0.0;
	int result = 0;

	printf("실수 데이터를 입력해주세요.\n");
	scanf("%lf", &num);

	result = (int)num % 10;

	printf("1자리 숫자 : %d\n\n", result);

	// #5
	// 사용자로부터 초(second)를 입력받아 [시, 분, 초] 형태로 나타내보세요
	// 예를 들어, 3665	=>	1시간 1분 5초

	int sec = 0, min = 0, hr = 0;

	printf("초(second)를 입력해주세요.\n");
	scanf("%d", &sec);

	hr = sec / 3600;
	min = (sec % 3600) / 60;
	sec = (sec % 3600) % 60;

	printf("%d시간 %d분 %d초\n", hr, min, sec);

	return 0;
}