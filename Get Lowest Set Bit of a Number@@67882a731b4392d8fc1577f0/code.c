#include <stdio.h>

int getLowestSetBit(int num) {
    return num & -num; // Isolates the lowest set bit
}

int main() {
    int num;
    scanf("%d", &num);

    printf("%d\n", getLowestSetBit(num));
    return 0;
}
