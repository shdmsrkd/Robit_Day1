#include <stdio.h>

int main(void)
{
	float input1,input3;
	char input2;
	float final;
	printf("Input Arithmetic Operation\n");
	printf("ex)		3.4 * 8.5\n");
	printf("		2.9 - 5.4\n");
	printf("		3.9 * 8.0\n");
	printf("		3.9 * 8\n\n");

	printf("input : ");
	/*scanf_s("%f %s %f", &input1, &input2, &input3);*/
	scanf_s("%f", &input1);
	scanf_s("%c", &input2);
	scanf_s("%f", &input3);


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
		if (input3 == 0)
		{
			printf("0으로 나눌수 없습니다. 다시 입력하세요");
			return 0;
		}
		final = input1 / input3;
	}
	else if (input2 == '^')
	{
		final = 1;
		for (int j = 0; j < input3; j++)
		{
			final *= input1;
		}
	}

	printf("\n %.2f %c %.2f = %.2f", input1, input2, input3, final);

}