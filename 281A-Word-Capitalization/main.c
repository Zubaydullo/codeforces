#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char word[1000];

    scanf("%s", word);

    if (word[0] >= 'a' && word[0] <= 'z')
        word[0] -= 32;
    printf("%s\n", word);
    return (0);
}
