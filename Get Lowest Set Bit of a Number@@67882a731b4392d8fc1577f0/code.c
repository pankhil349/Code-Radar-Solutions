#include <stdio.h>

int getLowestSetBit(int num) {
    return (num == 0) ? 0 : (1 << __builtin_ctz(num)); // 1 << count of trailing zeros
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d\n", getLowestSetBit(num));
    return 0;
}
