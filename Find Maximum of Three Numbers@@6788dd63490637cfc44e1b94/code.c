// Your code here...
#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a < c && b <c){
        printf("%d", c);
    }
    else if (a < b && b > c){
        printf("%d", b);
    }
    else{
        printf("%d", c);
    }
    return 0;
}