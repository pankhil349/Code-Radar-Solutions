// Your code here...
#include<stdio.h>
#include<math.h>
int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(pow(a, 2) && pow(b, 2) == pow(c, 2)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}