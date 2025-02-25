#include <stdio.h>

int getLowestSetBit(int num) {
    if (num == 0) return 0; // No set bit found

    int bit = 1;
    while ((num & bit) == 0) {
        bit <<= 1; // Shift bit left until it finds the lowest 1
    }
    return bit;
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d\n", getLowestSetBit(num));
    return 0;
}
