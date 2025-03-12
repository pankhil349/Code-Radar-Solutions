// Your code here...
#include<stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if (a < 0){
        printf("Negative");
    }
    else if (a == 0){
        printf("Zero");
    }
    else{
        printf("Positive");
    }
    return 0;
}