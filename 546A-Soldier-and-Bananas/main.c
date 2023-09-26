#include <stdio.h>

int main(void)
{
    int cost_banana;
    int soldier_dollar;
    int banana_number;
    int money_needed;
    int sum;

    scanf("%d %d %d", &cost_banana, &soldier_dollar, &banana_number);
    sum = 0;
    money_needed = 0;
    for (int i = 1; i <= banana_number; i++)
    {
        sum += cost_banana * i;
    }
    if (sum > soldier_dollar)
        printf("%d", (sum - soldier_dollar));
    if (sum <= soldier_dollar)
        printf("%d", 0);
    return (0);
}