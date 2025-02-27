#include <stdio.h>

void swap(int *a, int *b) {
    if (a == b) return; // Avoid self-swap

    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf("%d %d\n", x, y);

    return 0;
}
