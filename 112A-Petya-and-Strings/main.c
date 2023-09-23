#include <stdio.h>

int	ft_tolower(int c);

int main(void)
{
    char str1[101];
    char str2[101];
    int i;

    scanf("%s\n%s", str1, str2);

    i = 0;
    while (str1[i])
    {
        str1[i] = ft_tolower(str1[i]);
        str2[i] = ft_tolower(str2[i]);
        if (str1[i] < str2[i])
        {
            printf("-1\n");
            return (0);
        }
        else if (str1[i] > str2[i])
        {
            printf("1\n");
            return (0);
        }
        i++;
    }
    printf("0\n");
    return (0);
}

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32; 
	}
	return (c);
}

int nums[10] = {2, , 5, , 7}