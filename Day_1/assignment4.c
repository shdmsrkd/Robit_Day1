#include <stdio.h>

int main(void)
{
	float input1,input3; char input2; float final = 1; // ���� �ʱ�ȭ
	
	printf("Input Arithmetic Operation\n");
	printf("ex)		3.4 * 8.5\n");
	printf("		2.9 - 5.4\n");
	printf("		3.9 * 8.0\n");
	printf("		3.9 * 8\n\n");

	printf("input : ");
	scanf_s("%f", &input1); // ����� ���� ������ �ޱ�
	scanf_s("%c", &input2,1); // ��ȣ ������ ���� ���� �ޱ�
	scanf_s("%f", &input3); // ����� ���� ������ �ޱ�

	// ����(input2)�� ���� ���� �ٸ� ��������� final ������ ����
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
		if (input3 == 0) // ������ ���� 0�ϰ�� �ٽ��Է��ϱ�
		{
			printf("0���� ������ �����ϴ�. �ٽ� �Է��ϼ���");
			return 0;
		}
		final = input1 / input3;
	}
	else if (input2 == '^')
	{
		for (int j = 0; j < input3; j++) // ������ ��� ������ input3�� ���� ����
		{
			final *= input1; // ���� final�� input1�� input3����ŭ ����
		}
	}

	printf("\n %.2f %c %.2f = %.2f", input1, input2, input3, final); // ���

}