#include <stdio.h>

int main(void)
{
	float input1,input3; char input2; float final = 1; // 변수 초기화
	
	printf("Input Arithmetic Operation\n");
	printf("ex)		3.4 * 8.5\n");
	printf("		2.9 - 5.4\n");
	printf("		3.9 * 8.0\n");
	printf("		3.9 * 8\n\n");

	printf("input : ");
	scanf_s("%f", &input1); // 계산을 위한 정수값 받기
	scanf_s("%c", &input2,1); // 부호 구별을 위한 문자 받기
	scanf_s("%f", &input3); // 계산을 위한 정수값 받기

	// 문자(input2)에 따라 각기 다른 계산방식으로 final 변수에 저장
	if (input2 == '+')
	{
		final = input1 + input3;
	}
	else if (input2 == '-')
	{
		final = input1 - input3;
	}
	else if (input2 == '*')
	{
		final = input1 * input3;
	}
	else if (input2 == '/')
	{
		if (input3 == 0) // 나누는 수가 0일경우 다시입력하기
		{
			printf("0으로 나눌수 없습니다. 다시 입력하세요");
			return 0;
		}
		final = input1 / input3;
	}
	else if (input2 == '^')
	{
		for (int j = 0; j < input3; j++) // 변수에 몇번 곱할지 input3를 통해 구함
		{
			final *= input1; // 변수 final에 input1을 input3번만큼 곱함
		}
	}

	printf("\n %.2f %c %.2f = %.2f", input1, input2, input3, final); // 출력

}