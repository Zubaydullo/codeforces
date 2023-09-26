#include <stdio.h>

int main(void)
{
    int a, b;
    int years;

    scanf("%d %d", &a, &b);

    years = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years++;
    }

    printf("%d", years);

    return 0;
}
