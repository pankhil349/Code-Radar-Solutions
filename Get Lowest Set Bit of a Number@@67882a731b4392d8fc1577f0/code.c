#include <stdio.h>

int findLowestSetBitPosition(int num) {
    if (num == 0) {
        return -1; // No set bit found
    }
    
    int position = 1; // Position starts from 1 (rightmost bit)
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    return position;
}

int main() {
    int num;
    scanf("%d", &num);
    
    int position = findLowestSetBitPosition(num);
    
    if (position == -1) {
        printf("%d", num);
    } else {
        printf( "%d\n", position);
    }
    
    return 0;
}
