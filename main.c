
#include <stdio.h>

int gcd(int m, int x);

int main(void)
{
    int number;
    int result;

    if (scanf("%d", &number) != 1)
    {
        return 0;
    }

    if (number > 9966990)
    {
        printf("NG");
        return 0;
    }

    result = gcd(9966990, number);

    printf("%d", result);

    return 0;
}

int gcd(int m, int x)
{
    long long first = m;
    long long second = x;
    long long remainder;

    if (first < 0)
    {
        first = -first;
    }

    if (second < 0)
    {
        second = -second;
    }

    while (second != 0)
    {
        remainder = first % second;
        first = second;
        second = remainder;
    }

    return (int)first;
}
