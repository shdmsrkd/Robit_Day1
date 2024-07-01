#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	// printf 예제
	/*
	int Number = 65;
	printf("65를 8진수로 변환 : %o\n", Number);
	printf("65를 10진수로 변환 : %d\n", Number);
	printf("65를 16진수로 변환 : %x\n", Number);
	printf("65를 문자형으로 변환 : %c\n", Number);
	*/


	// scnaf 예제
	/*int age = 0;
	printf("당신의 나이를 입력하세요.\n");
	scanf("%d", &age);
	printf("당신의 나이는 %d입니다.\n", age);*/


	// 산술 연산자 예제2
	/*int a, b, c;
	a = 10; b = 20; c = 30;

	a = b++;
	c = b++;
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);

	a = ++b + ++c;
	printf("a = ++b + ++b 문장실행후 \n");
	printf("a = %d, b = %d, c = %d\n\n", a, b, c);

	a = b++ + c++;
	printf("a = b++ + c++ 문장실행후 \n");
	printf("a = %d, b = %d, c = %d\n", a, b, c);*/


	// 논리 연산자 예쩨
	/*int a = 0, b = 1;

	printf("논리 연산 1 && 2의 결과 : %d\n", 1 && 2);
	printf("논리 연산 0 && 2의 결과 : %d\n\n", 0 && 2);

	printf("논리 연산 0 || 2의 결과 : %d\n", 0 || 2);
	printf("논리 연산 0 || 0의 결과 : %d\n\n", 0 || 0);

	printf("논리 연산 !a 결과 : %d\n", !a);
	printf("논리 연산 !b 결과 : %d\n", !b);*/


	// << (곱하기 2), >> (나누기 2)


	// 축약 연산자 예제
	/*int a = 10;
	printf("초깃값 : a = 10\n");

	a += 5;
	printf("a += 5 : %d\n", a);

	a = 10;
	a -= 5 + 2;
	printf("a -= 5 + 2 : %d\n", a);

	a = 10;
	a *= 2 + 5;
	printf("a *= 2 + 5 : %d\n", a);*/

	// 조건 연산자 '?'
	// (x > y) ? 1 : 2;
	// 괄호안 값이 참이면 1, 거짓이면 2


	// 조건 연산자 예제
	/*int min, max;

	int x = 10, y = 20;

	max = (x > y) ? x : y;
	min = (x > y) ? y : x;

	printf("두 수 %d와 &d 중에 큰 수는 %d이다.\n", x, y, max);
	printf("두 수 %d와 &d 중에 작은 수는 %d이다.\n", x, y, min);*/


	// if 문 예제 1
	/*int input;
	printf("양수를 입력하세요. \n");
	scanf_s("%d", &input);

	if (input % 2 == 0)
		printf("입력한 수 %d는 짝수입니다. \n", input);
	else
		printf("입력한 수 %d는 홀수입니다. \n", input);*/


	// switch ~ case 예제 1
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
		printf("잘못 입력했습니다. 1~3 사이의 숫자를 입력하세요.\n");
	}*/


	// for 예제 1
	/*int i,j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 11; j++)
		{
			printf("*");
		}
		printf("\n\n");
	}*/


	// while 예제1
	int sum = 0, number = 1;
	pritnf("1에서 10까지 합을 구합니다.\n");

	while (number <= 10)
	{
		sum += number;
		number++;
	}

	pritnf("합은 %d입니다.\n", sum);

	// break 예제
	int i;

	for (i = 1; i < 100; i++)
	{
		printf("%d", i);
		if (i >= 5) break;
	}

	pritnf("\n for 문을 빠져나왔습니다.\n");
	return 0;
}