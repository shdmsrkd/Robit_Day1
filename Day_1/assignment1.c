#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	float input1, input2; // ���� �ʱ�ȭ
	float num = 0; // ��� ���Ҷ� ���� ����
	
	printf("1 ��° �Ǽ��� �Է��Ͻÿ�. "); // max�� min�� ����� �ƴ� �Է��� ������ �����ϱ� ���� ���� ��
	scanf_s("%f", &input1);
	float max = input1;
	float min = input1;

	for (int i = 2; i <= 5; i++) // for���� �̿��� ������� �Է°� 4���� �޾ƿ�
	{
		printf("%d ��° �Ǽ��� �Է��Ͻÿ�. ",i);
		scanf_s("%f", &input2);

		if (input2 >= max) // max���� ũ�ų� ���� ���� ������ max�� ������ max ������ �ִ��� ������ ��
		{
			max = input2; 
		}
		else if (input2 <= min) // min���� �۰ų� ���� ���� ������ min�� ������ min ������ �ִ��� ������ ��
		{
			min = input2;
		}
		num += input2; // ����� ���ϱ� ���� ��
	}


	printf("---  ���  ---\n");
	printf("����� %.2f �Դϴ�.\n", (num + input1) / 5); // ���λ� input1�� num�� ���ѵڿ� 5�� ������ ����� ����
	printf("�ִ��� %.2f �Դϴ�.\n", max);
	printf("�ּڰ��� %.2f �Դϴ�.\n", min);

}