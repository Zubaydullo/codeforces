
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long long n;
    int remainder;
    bool has_4 = false;
    bool has_7 = false;

    scanf("%lld", &n);

    while (n > 0)
    {
        remainder = n % 10;
        n = n / 10;
        if (remainder == 4)
        {
            has_4 = true;
        } else if (remainder == 7)
        {
            has_7 = true;
        } else
        {
            printf("NO\n");
            return 0;
        }
    }

    if (has_4 && has_7) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

// #include <stdio.h>
// #include <stdbool.h>

// int main(void)
// {
//     long long n;
//     int remainder;
//     bool go_on = false;

//     scanf("%lld", &n);

//     while (n > 0)
//     {
//         remainder = n % 10;
//         n = n / 10;
//         if (remainder != 7 && remainder != 4)
//         {
//             printf("NO\n");
//             go_on = false;
//             return (0);
//         }
//         go_on = true;
//     }

//     if (go_on)
//     {
//         printf("YES\n");
//     }
    
//     return 0;
// }