#include<stdio.h>

int main() {

    int n, first, second, i; // ���� �ʱ�ȭ
    int third = 0; // ���� �ʱ�ȭ

    printf("���° �Ǻ���ġ ������ �˰� ��������?: "); 
    scanf_s("%d", &n); // ����ڿ��� n�� ����

    first = 0, second = 1;
    for (i = 1; i <= n-2; i++)
    {
        if (n == 1) // n�� 1�ϰ�� first ��� (����ó��)
        {
            printf("%d", first);
        }
        else if (n == 2) // n�� 2�ϰ�� second ��� (����ó��)
        {
            printf("%d", second);
        }
        else if (n >= 3)
        {
            third = first + second; // third�� first + second�� ���� ���� ����
            first = second;         // first ������ second ���� �������ν� ��ĭ �̵�
            second = third;         // second ������ third ���� �������ν� ��ĭ �̵�
        }
    }
    printf("%d", third);
}