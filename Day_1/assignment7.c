#include <stdio.h>

int main(void)
{
    int n, r;
    int n_fact = 1, r_fact = 1, n_minus_r_fact = 1, n_minus_1_fact = 1, n_plus_r_minus_1_fact = 1;
    int square = 1;

    printf("n과 r을 입력하시오: ");
    scanf_s("%d %d", &n, &r); // 사용자로부터 n값과 r값을 받음

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

    printf("순열 : %d\n", n_fact / n_minus_r_fact);
    printf("중복순열 : %d\n", square);
    printf("조합 : %d\n", n_fact / (n_minus_r_fact * r_fact));
    printf("중복조합 : %d\n", n_plus_r_minus_1_fact / (n_minus_1_fact * r_fact));

    return 0;
}
