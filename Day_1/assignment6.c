#include <stdio.h>

int main()
{
    int floor, blank, star, num;

    // ��, ��ĭ, ��, �Է¹޴� ���� ������ ���� ����

    printf("���� �Է��ϼ���. ");
    scanf_s("%d", &num);



    for (floor = 1; floor <= num; floor++) //���� �����ϱ� ���� for��
    {
        for (blank = 1; blank <= num - floor; blank++)  //�ﰢ�� �ٱ��� ��ĭ ��Ÿ���� for��
        {
            printf(" ");
        }
        for (star = 1; star <= 2 * floor - 1; star++) // �ﰢ�� �ѿ� '*' , �ӿ� " "  �� ��Ÿ�� for��
        {
            if (star == 1 || star == 2 * floor - 1 || floor == num)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


}