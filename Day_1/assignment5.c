#include <stdio.h>

int main(void)
{
	int input = 0;
	printf("���� �Է��ϼ���. ");
	scanf_s("%d", &input);

	for (int i = 0; i <= input; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}

		/*for (int j = 0; j <= i; j++)
		{
			printf("");
		}*/
		printf("\n");
	}
}