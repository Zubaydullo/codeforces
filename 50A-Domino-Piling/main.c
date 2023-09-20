#include <stdio.h>

int main(void)
{
    int m, n, res;

    scanf("%d %d", &m, &n);
    if (m >= 1 && n <= 16)
    {
        res = (m * n) / 2;
        printf("%d", res);
    }
    return (0);
}