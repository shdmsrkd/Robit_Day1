#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	float a,b;
	float num = 0;
	float max;
	float min;
	
	scanf_s("%f", &b);

	for (int i = 2; i <= 5; i++)
	{
		printf("%d 번째 실수를 입력하시오. ",i);
		scanf_s("%f", &a);


		if (a >= max) 
		{
			max = a;
		}
		else if (a <= min)
		{
			min = a;
		}
		num += a;
	}

	/*printf("평균은 %f 입니다.", num / 5);
	printf("최댓값은 %f 입니다.", max);
	printf("최솟값은 %f 입니다.", min);*/
	

	/*float input1, input2, input3, input4, input5;

	printf("1 번째 실수를 입력하시오. \n");
	scanf_s("%d", input1);

	printf("2 번째 실수를 입력하시오. \n");
	scanf_s("%d", input2);

	printf("3 번째 실수를 입력하시오. \n");
	scanf_s("%d", input3);

	printf("4 번째 실수를 입력하시오. \n");
	scanf_s("%d", input4);

	printf("5 번째 실수를 입력하시오. \n");
	scanf_s("%d", input5);
	

	printf("---  결과  ---\n")
	printf("평균은 ")*/


}