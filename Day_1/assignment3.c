#include <stdio.h>

int main(void)
{
	int input;
	printf("�⵵�� �Է��ϼ��� : ");
	scanf_s("%d",&input);

	if (input % 4 == 0 && input % 100 != 0) // ����ڰ� �Է��� ���� 4�� ����̰�, 100�� ����� �ƴϸ� '����'���
		printf("����");
	else if (input % 400 == 0) // ����ڰ� �Է��� ���� 400�� ����̸� '����'���
		printf("����");
	else // �� ���� ���� '������ �ƴմϴ�!' ���
		printf("������ �ƴմϴ�!");
}