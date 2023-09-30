#include <stdio.h>

int ft_strlen(const char *str);

int main(void)
{
    int n;
    int a_count = 0;
    int d_count = 0;
    char games[100001];
    
    scanf("%d", &n);
    scanf("%s", games);
    for (int j = 0; j < n; j++)
    {
        if (games[j] == 'A')
            a_count++;
        else if (games[j] == 'D')
            d_count++;
    }
    
    if (a_count > d_count)
        printf("Anton\n");
    else if (a_count < d_count)
        printf("Danik\n");
    else 
        printf("Friendship\n");
    
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