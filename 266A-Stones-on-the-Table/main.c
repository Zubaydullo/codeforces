#include <stdio.h>

int main(void)
{
    int i, n;
    int count;
    char str[51];

    scanf("%d", &n);
    scanf("%s", str);

    count = 0;
    for (i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
            count++;
    }
    printf("%d", count);

    return (0);
}