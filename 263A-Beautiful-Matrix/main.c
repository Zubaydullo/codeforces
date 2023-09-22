#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int row, col, row_swaps, col_swaps, total_swaps;
    int nums[5][5];

    row = 0;
    while (row < 5)
    {
        col = 0;
        while (col < 5)
        {
            scanf("%d", &nums[row][col]);
            col++;
        }
        row++;
    }

    row_swaps = 0;
    col_swaps = 0;
    total_swaps = 0;
    row = 0;
    while (row < 5)
    {
        col = 0;
        while (col < 5)
        {
            if (nums[row][col] == 1)
            {
                row_swaps = abs(row - 2);

                col_swaps = abs(col - 2);

                total_swaps = row_swaps + col_swaps;

                printf("%d\n", total_swaps);
                return (0);
            }
            col++;
        }
        row++;
    }

    return (0);
}