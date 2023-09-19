#include <stdio.h>

int main() {
    int n, k, count;
    int scores[50];

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= scores[k - 1] && scores[i] > 0) {
            count++;
        }
    }
    printf("%d\n", count);

    return (0);
}
