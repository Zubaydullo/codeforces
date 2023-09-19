#include <stdio.h>

int main() {
    unsigned long long length, width, flagstone_side;
    unsigned long long flagstones_needed_length, flagstones_needed_width, total_flagstones;

    scanf("%llu %llu %llu", &length, &width, &flagstone_side);

    flagstones_needed_length = length / flagstone_side;
    if (length % flagstone_side != 0) {
        flagstones_needed_length++;
    }

    flagstones_needed_width = width / flagstone_side;
    if (width % flagstone_side != 0) {
        flagstones_needed_width++;
    }

    total_flagstones = flagstones_needed_length * flagstones_needed_width;
    printf("%llu", total_flagstones);

    return (0);
}
