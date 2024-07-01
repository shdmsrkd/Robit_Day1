#include <stdio.h>

int main(void)
{
	int input;
	printf("년도를 입력하세요 : ");
	scanf_s("%d",&input);

	if (input % 4 == 0 && input % 100 != 0) // 사용자가 입력한 값이 4의 배수이고, 100의 배수가 아니면 '윤년'출력
		printf("윤년");
	else if (input % 400 == 0) // 사용자가 입력한 값이 400의 배수이면 '윤년'출력
		printf("윤년");
	else // 그 외의 값은 '윤년이 아닙니다!' 출력
		printf("윤년이 아닙니다!");
}