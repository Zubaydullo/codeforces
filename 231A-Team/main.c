#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int iteration;
    int main_counter;
    int counter;
    int nums[3];

    scanf("%d", &n);
    i = 0;
    main_counter = 0;
    while (i < n)
    {
        scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
        iteration = 2;
        counter = 0;
        while (iteration >= 0)
        {
            if (nums[iteration] == 1)
            {
                counter++;
            }
            iteration--;
        }
        if (counter >= 2)
        {
            main_counter++;
        }
        i++;
    }
    printf("%d", main_counter);
    return (0);
}
