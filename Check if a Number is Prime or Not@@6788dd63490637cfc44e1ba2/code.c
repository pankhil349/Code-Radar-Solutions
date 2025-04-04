#include <stdio.h>

int main() {
    int a, i, isPrime = 1;
    scanf("%d", &a);

    if (a <= 1) {
        isPrime = 0; // 0 and 1 are not prime numbers
    } else {
        for (i = 2; i <= a / 2; i++) {
            if (a % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
