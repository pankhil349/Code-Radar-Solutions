// Your code here...
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = (a >> b) & 1;
    printf("%d", c);
    return 0;
}