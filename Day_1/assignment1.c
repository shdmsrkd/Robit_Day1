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
		printf("%d ��° �Ǽ��� �Է��Ͻÿ�. ",i);
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

	/*printf("����� %f �Դϴ�.", num / 5);
	printf("�ִ��� %f �Դϴ�.", max);
	printf("�ּڰ��� %f �Դϴ�.", min);*/
	

	/*float input1, input2, input3, input4, input5;

	printf("1 ��° �Ǽ��� �Է��Ͻÿ�. \n");
	scanf_s("%d", input1);

	printf("2 ��° �Ǽ��� �Է��Ͻÿ�. \n");
	scanf_s("%d", input2);

	printf("3 ��° �Ǽ��� �Է��Ͻÿ�. \n");
	scanf_s("%d", input3);

	printf("4 ��° �Ǽ��� �Է��Ͻÿ�. \n");
	scanf_s("%d", input4);

	printf("5 ��° �Ǽ��� �Է��Ͻÿ�. \n");
	scanf_s("%d", input5);
	

	printf("---  ���  ---\n")
	printf("����� ")*/


}