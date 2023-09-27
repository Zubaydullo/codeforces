#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[100];
    int i;
    int lower_count;
    int upper_count;

    scanf ("%s", str);

    lower_count = 0;
    upper_count = 0;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            lower_count++;
        }
        else if (str[i] >= 65 && str[i] <=  90)
        {
            upper_count++;
        }
        i++;
    }
    if (lower_count > upper_count || lower_count == upper_count)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            str[i] = tolower(str[i]);
        }
        printf("%s", str);
    }
    else if (lower_count < upper_count)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            str[i] = toupper(str[i]);
        }
        printf("%s", str);
    }
    return (0);
}