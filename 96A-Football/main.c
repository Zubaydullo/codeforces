#include <stdio.h>

int ft_strlen(const char *str);


int main(void)
{
    int count_zeros = 0, count_ones = 0;
    char str[101];

    scanf("%s", str);
    for (int i = 0; i < ft_strlen(str); i++)
    {
        if (str[i] == '0')
        {
            count_zeros++;
            count_ones = 0;
        }
        else if (str[i] == '1')
        {
            count_ones++;
            count_zeros = 0;
        }
        if (count_zeros == 7 || count_ones == 7)
        {
            printf("YES");
            return (0);
        }
    }
    if (count_zeros < 7 || count_ones < 7)
        printf("NO");
    return (0);
}

int ft_strlen(const char *str)
{
    int counter;
    counter = 0;
    while (*str)
    {
        counter++;
        str++;
    }
    return (counter);
}