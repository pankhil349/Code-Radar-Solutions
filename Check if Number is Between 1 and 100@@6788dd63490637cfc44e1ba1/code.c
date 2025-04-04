// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if ( a >= 0 && a <= 100){
        printf("In range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}