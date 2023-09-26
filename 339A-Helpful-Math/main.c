#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int j;
    char word[100];

    scanf("%s", word);

    for (i = 0; i < strlen(word); i++)
    {
        for (j = i + 1; j < strlen(word); j++)
        {
            if (word[j] == '1' || word[j] == '2' || word[j] == '3')
            {
                if (word[i] > word[j])
                {
                    char temp = word[i];
                    word[i] = word[j];
                    word[j] = temp;
                }

            }
        }
    }
    printf("%s", word);
    return (0);
}