#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	// printf ����
	/*
	int Number = 65;
	printf("65�� 8������ ��ȯ : %o\n", Number);
	printf("65�� 10������ ��ȯ : %d\n", Number);
	printf("65�� 16������ ��ȯ : %x\n", Number);
	printf("65�� ���������� ��ȯ : %c\n", Number);
	*/


	// scnaf ����
	/*int age = 0;
	printf("����� ���̸� �Է��ϼ���.\n");
	scanf("%d", &age);
	printf("����� ���̴� %d�Դϴ�.\n", age);*/


	// ��� ������ ����2
	/*int a, b, c;
	a = 10; b = 20; c = 30;

	a = b++;
	c = b++;
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);

	a = ++b + ++c;
	printf("a = ++b + ++b ��������� \n");
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);

	a = b++ + c++;
	printf("a = b++ + c++ ��������� \n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);*/


	// �� ������ ����
	/*int a = 0, b = 1;

	printf("�� ���� 1 && 2�� ��� : %d\n", 1 && 2);
	printf("�� ���� 0 && 2�� ��� : %d\n\n", 0 && 2);

	printf("�� ���� 0 || 2�� ��� : %d\n", 0 || 2);
	printf("�� ���� 0 || 0�� ��� : %d\n\n", 0 || 0);

	printf("�� ���� !a ��� : %d\n", !a);
	printf("�� ���� !b ��� : %d\n", !b);*/


	// << (���ϱ� 2), >> (������ 2)


	// ��� ������ ����
	/*int a = 10;
	printf("�ʱ갪 : a = 10\n");

	a += 5;
	printf("a += 5 : %d\n", a);

	a = 10;
	a -= 5 + 2;
	printf("a -= 5 + 2 : %d\n", a);

	a = 10;
	a *= 2 + 5;
	printf("a *= 2 + 5 : %d\n", a);*/

	// ���� ������ '?'
	// (x > y) ? 1 : 2;
	// ��ȣ�� ���� ���̸� 1, �����̸� 2


	// ���� ������ ����
	/*int min, max;

	int x = 10, y = 20;

	max = (x > y) ? x : y;
	min = (x > y) ? y : x;

	printf("�� �� %d�� &d �߿� ū ���� %d�̴�.\n", x, y, max);
	printf("�� �� %d�� &d �߿� ���� ���� %d�̴�.\n", x, y, min);*/


	// if �� ���� 1
	/*int input;
	printf("����� �Է��ϼ���. \n");
	scanf_s("%d", &input);

	if (input % 2 == 0)
		printf("�Է��� �� %d�� ¦���Դϴ�. \n", input);
	else
		printf("�Է��� �� %d�� Ȧ���Դϴ�. \n", input);*/


	// switch ~ case ���� 1
	/*int input;
	switch (input) {
	case 1:
		printf("Good Morning!!\n");
		break;
	case 2:
		printf("Good Afternoon!!\n");
		break;
	case 3:
		printf("Good Night!!\n");
		break;
	default:
		printf("�߸� �Է��߽��ϴ�. 1~3 ������ ���ڸ� �Է��ϼ���.\n");
	}*/


	// for ���� 1
	/*int i,j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 11; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}*/


	// while ����1
	int sum = 0, number = 1;
	pritnf("1���� 10���� ���� ���մϴ�.\n");

	while (number <= 10)
	{
		sum += number;
		number++;
	}

	pritnf("���� %d�Դϴ�.\n", sum);

	// break ����
	int i;

	for (i = 1; i < 100; i++)
	{
		printf("%d", i);
		if (i >= 5) break;
	}

	pritnf("\n for ���� �������Խ��ϴ�.\n");
	return 0;
}