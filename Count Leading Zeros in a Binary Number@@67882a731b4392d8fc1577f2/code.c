#include <stdio.h>

int main() {
    unsigned int num;
    scanf("%u", &num);

    int leadingZeros = __builtin_clz(num); // Counts leading zeros
    printf("%d\n", leadingZeros);

    return 0;
}
