#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char user_name[101];
    int distinct_chars[26] = {0};
    int index, len, distinct_count;

    scanf("%s", user_name);
    len = strlen(user_name);
    index = 0;
    for (int i = 0; i < len; i++) {
        index = user_name[i] - 'a';
        distinct_chars[index]++;
    }

    distinct_count = 0;
    for (int i = 0; i < 26; i++) {
        if (distinct_chars[i] > 0) {
            distinct_count++;
        }
    }

    if (distinct_count % 2 == 0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return (0);
}
