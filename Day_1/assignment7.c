#include <stdio.h>

int main(void)
{
    int n, r;
    int n_fact = 1, r_fact = 1, n_minus_r_fact = 1, n_minus_1_fact = 1, n_plus_r_minus_1_fact = 1;
    int square = 1;

    printf("n�� r�� �Է��Ͻÿ�: ");
    scanf_s("%d %d", &n, &r); // ����ڷκ��� n���� r���� ����

    for (int i = 1; i <= n; i++) {
        n_fact *= i; // n!
    }

    for (int i = 1; i <= r; i++) {
        r_fact *= i; // r!
    }

    for (int i = 1; i <= n - r; i++) {
        n_minus_r_fact *= i; // (n-r)!
    }

    for (int i = 1; i <= n - 1; i++) {
        n_minus_1_fact *= i; // (n-1)!
    }

    for (int i = 1; i <= r; i++) {
        square *= n; // n^r
    }

    for (int i = 1; i <= n + r - 1; i++) {
        n_plus_r_minus_1_fact *= i; // (n+r-1)!
    }

    printf("���� : %d\n", n_fact / n_minus_r_fact);
    printf("�ߺ����� : %d\n", square);
    printf("���� : %d\n", n_fact / (n_minus_r_fact * r_fact));
    printf("�ߺ����� : %d\n", n_plus_r_minus_1_fact / (n_minus_1_fact * r_fact));

    return 0;
}
