#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf(" %c", &op);  // space skips whitespace/newline

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("error\n");
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
            printf("Error: Invalid operator '%c'.\n", op);
    }

    return 0;
}
