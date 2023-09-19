#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    int i;
    int word_length;
    char word[101];

    scanf("%d", &n);

    i = 0;
    word_length = 0;
    while (i < n)
    {
        scanf("%s", word);
        word_length = strlen(word);
        if (word_length > 10)
            printf("%c%d%c\n", word[0], word_length - 2, word[word_length - 1]);
        else
            printf("%s\n", word);
        i++;
    }
    return (0);
}