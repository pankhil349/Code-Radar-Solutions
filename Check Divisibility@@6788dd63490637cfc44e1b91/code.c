// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    if ( num % 11 == 0){
        printf("Divisible");
    }
    else{
        printf("Not Divisible");
    }
    return 0;
}