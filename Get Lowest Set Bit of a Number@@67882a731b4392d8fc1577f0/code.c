#include <stdio.h>

int findLowestSetBitPosition(int num) {
    if (num == 0) return -1; // No set bit found

    return __builtin_ffs(num); // GCC/Clang built-in function for first set bit (1-based index)
}

int main() {
    int num;
    scanf("%d", &num);
    
    printf("%d\n", findLowestSetBitPosition(num));
    return 0;
}
