#include<stdio.h>

int main() {

    int n, first, second, i; // 변수 초기화
    int third = 0; // 변수 초기화

    printf("몇번째 피보나치 수열을 알고 싶은가요?: "); 
    scanf_s("%d", &n); // 사용자에게 n값 받음

    first = 0, second = 1;
    for (i = 1; i <= n-2; i++)
    {
        if (n == 1) // n이 1일경우 first 출력 (예외처리)
        {
            printf("%d", first);
        }
        else if (n == 2) // n이 2일경우 second 출력 (예외처리)
        {
            printf("%d", second);
        }
        else if (n >= 3)
        {
            third = first + second; // third에 first + second를 더한 값을 대입
            first = second;         // first 변수에 second 값을 넣음으로써 한칸 이동
            second = third;         // second 변수에 third 값을 넣음으로써 한칸 이동
        }
    }
    printf("%d", third);
}