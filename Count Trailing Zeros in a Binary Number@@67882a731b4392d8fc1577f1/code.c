// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int trailing_zeros = __builtin_ctz(a);
    printf("%d", trailing_zeros);
    return 0;
}