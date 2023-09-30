#include <stdio.h>

int ft_strlen(const char *str);

int main(void)
{
    char s[101];
    char t[101];
    int i;


    scanf("%s", s);
    scanf("%s", t);
    i = 0;


    while (i <= ft_strlen(s))
    {
        if (s[i] != t[ft_strlen(s) - i - 1])
        {
            printf("NO\n");
            return (0);
        }
        i++;
    }

    printf("YES\n");
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