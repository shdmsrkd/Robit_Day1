#include <stdio.h>

int main(void)
{

	int input = 0;
	printf("���� �Է��ϼ���. ");
	scanf_s("%d", &input); 


	// i�� �ټ��� ��Ÿ���� j�� ��ĭ�̳� ���� ���� ������ ��Ÿ����.

	for (int i = 1; i < input * 2; i++) // ���� ����� ������
	{
		if (i <= input) // input��° �ٱ��� ���
		{
			for (int j = 0; j < i; j++) // ���� ���� �밢�� ����
			{
				printf("*");
			}
			for (int j = 0; j < 2 * (input - i); j++) // ���� �߾� ����
			{
				printf(" ");
			}
			for (int j = 0; j < i; j++) //  ���� ������ �밢�� ����
			{
				printf("*");
			}
			printf("\n");

		}
		else if (i > input) // input + 1 ��° �ٺ��� input * 2 - 1 ��° �ٱ��� ���
		{
			for (int j = 1; j <= (input - (i - input)); j++) // �Ʒ��� ���� �밢�� ����
			{
				printf("*");
			}	
			for (int j = 1; j <= 2 * (i - input); j++) // �Ʒ��� �߾� ����
			{
				printf(" ");
			}
			for (int j = 1; j <= (input - (i - input)); j++) // �Ʒ��� ������ �밢�� ����
			{
				printf("*");
			}
			printf("\n");

		}
		
	}
}