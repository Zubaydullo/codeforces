#include <stdio.h>

int main(void)
{
    int n;
    int sum_x = 0, sum_y = 0, sum_z = 0;
    int x, y, z;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0)
        printf("YES\n");
    else
        printf("NO\n");

    return (0);
}
