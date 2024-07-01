#include <stdio.h>

int main(void)
{

	int input = 0;
	printf("값을 입력하세요. ");
	scanf_s("%d", &input); 


	// i는 줄수를 나타내고 j는 빈칸이나 별을 찍을 개수를 나타낸다.

	for (int i = 1; i < input * 2; i++) // 몇줄 출력할 것인지
	{
		if (i <= input) // input번째 줄까지 출력
		{
			for (int j = 0; j < i; j++) // 위쪽 왼쪽 대각선 세모
			{
				printf("*");
			}
			for (int j = 0; j < 2 * (input - i); j++) // 위쪽 중앙 공백
			{
				printf(" ");
			}
			for (int j = 0; j < i; j++) //  위쪽 오른쪽 대각선 세모
			{
				printf("*");
			}
			printf("\n");

		}
		else if (i > input) // input + 1 번째 줄부터 input * 2 - 1 번째 줄까지 출력
		{
			for (int j = 1; j <= (input - (i - input)); j++) // 아래쪽 왼쪽 대각선 세모
			{
				printf("*");
			}	
			for (int j = 1; j <= 2 * (i - input); j++) // 아래쪽 중앙 공백
			{
				printf(" ");
			}
			for (int j = 1; j <= (input - (i - input)); j++) // 아래쪽 오른쪽 대각선 세모
			{
				printf("*");
			}
			printf("\n");

		}
		
	}
}