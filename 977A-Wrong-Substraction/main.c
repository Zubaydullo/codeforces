#include <stdio.h>

int main(void)
{
    int n, k, number;

    scanf("%d %d", &n, &k);

    number = n;
    for (int i = 0; i < k; i++)
    {
        if (number % 10 > 0)
        {
            number--;
        }
        else if (number % 10 == 0)
        {
            number = number / 10;
        }
    }
    printf("%d", number);
    return (0);
}