#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char word[101];
    char word2[201];
    int i, j;

    scanf("%s", word);

    i = 0;
    j = 0;

    while (word[i]) {
        char c = word[i];

        if (!(c == 'A' || c == 'O' || c == 'Y' || c == 'E' || c == 'U' || c == 'I' ||
              c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i'))
        {
            word2[j++] = '.'; 
            if (c >= 'A' && c <= 'Z')
                word2[j++] = c + 32;
            else
                word2[j++] = c;
        }
        i++;
    }

    word2[j] = '\0';

    printf("%s\n", word2);
    return (0);
}
