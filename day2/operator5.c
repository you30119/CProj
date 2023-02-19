#include <stdio.h>

int main7() {
	// page98 #1
	// 사용자로부터 나이를 입력받아 20살 이상이면 1250원, 20살 미만이면 800원을 받는 지하철 요금정산 프로그램 만들기
	/*당신의 나이는 26세이며, 요금은 1250원입니다!*/
	/*당신의 나이는 19세이며, 요금은 800원입니다!*/

	int age1 = 0, pay = 0;

	printf("당신의 나이를 입력해주세요.\n");
	scanf("%d", &age1);

	pay = age1 >= 20 ? 1250 : 800;

	printf("당신의 나이는 %d세이며, 요금은 %d원입니다!\n\n", age1, pay);


	// page98 #2
	// 사용자로부터 나이와 키를 입력받아 나이가 12살 이상이고, 키가 120cm 이상일 때만 놀이기구 탑승을 허용해주세요
	/*놀이기구에 탑승할 수 있습니다.*/
	/*놀이기구에 탑승할 수 없습니다.*/

	int age2 = 0;
	double height = 0.0;

	printf("당신의 나이를 입력해주세요.\n");
	scanf("%d", &age2);
	printf("당신의 키를 입력해주세요.\n");
	scanf("%lf", &height);

	int condition = 0;

	condition = age2 >= 12 && height >= 120.0;

	condition == 1 ? printf("놀이기구에 탑승할 수 있습니다\n") : printf("놀이기구에 탑승할 수 없습니다\n");


	return 0;
}