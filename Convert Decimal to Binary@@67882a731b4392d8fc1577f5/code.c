#include <stdio.h>

void decimalToBinary(int num) {
    int started = 0; // Flag to skip leading zeros

    for (int i = 31; i >= 0; i--) {
        if ((num >> i) & 1) {
            started = 1; // Start printing after first '1'
        }
        if (started) {
            printf("%d", (num >> i) & 1);
        }
    }

    if (!started) printf("0"); // If number is 0, print '0'
}

int main() {
    int num;
    scanf("%d", &num);
    decimalToBinary(num);
    printf("\n");

    return 0;
}
