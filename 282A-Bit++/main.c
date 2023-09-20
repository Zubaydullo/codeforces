#include <stdio.h>
#include <string.h>

// solution - 1
int main(void) {
    int n, i, res;
    char text[4];
    scanf("%d", &n);
    i = 0;
    res = 0;
    while (i < n) {
        scanf("%s", text);
        if (strstr(text, "++") != NULL)
            res++;
        else if (strstr(text, "--") != NULL)
            res--;
        i++;
    }
    printf("%d", res);
    return 0;
}

// solution - 2
// int main(void)
// {
//     int     n, i, j, res;
//     char    text[4];
//     scanf("%d", &n);
//     i = 0;
//     res = 0;
//     while (i < n)
//     {
//         scanf("%s", text);
//         if ((text[0] == '+' && text[1] == '+') || (text[1] == '+' && text[2] == '+'))
//             res++;
//         else if ((text[0] == '-' && text[1] == '-') || (text[1] == '-' && text[2] == '-'))
//             res--;
//         i++;
//     }
//     printf("%d", res);
//     return (0);
// }