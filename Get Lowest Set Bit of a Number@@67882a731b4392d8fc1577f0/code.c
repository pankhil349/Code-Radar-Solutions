#include <stdio.h>

int findLowestSetBitPosition(int num) {
    if (num == 0) return -1;
    return (num & -num) ? __builtin_ctz(num) + 1 : -1; // Count trailing zeros + 1
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d\n", findLowestSetBitPosition(num));
    return 0;
}
