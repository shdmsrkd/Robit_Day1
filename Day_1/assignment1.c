#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	float input1, input2; // 변수 초기화
	float num = 0; // 평균 구할때 더할 변수
	
	printf("1 번째 실수를 입력하시오. "); // max와 min을 상수가 아닌 입력한 변수로 저장하기 위해 따로 뺌
	scanf_s("%f", &input1);
	float max = input1;
	float min = input1;

	for (int i = 2; i <= 5; i++) // for문을 이용해 사용자의 입력값 4개를 받아옴
	{
		printf("%d 번째 실수를 입력하시오. ",i);
		scanf_s("%f", &input2);

		if (input2 >= max) // max보다 크거나 같은 값이 있으면 max에 저장해 max 변수에 최댓값이 들어가도록 함
		{
			max = input2; 
		}
		else if (input2 <= min) // min보다 작거나 같은 값이 있으면 min에 저장해 min 변수에 최댓값이 들어가도록 함
		{
			min = input2;
		}
		num += input2; // 평균을 구하기 위한 합
	}


	printf("---  결과  ---\n");
	printf("평균은 %.2f 입니다.\n", (num + input1) / 5); // 따로뺀 input1과 num을 더한뒤에 5로 나누어 평균을 구함
	printf("최댓값은 %.2f 입니다.\n", max);
	printf("최솟값은 %.2f 입니다.\n", min);

}