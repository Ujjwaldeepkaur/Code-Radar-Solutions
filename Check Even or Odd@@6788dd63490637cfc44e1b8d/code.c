#include <stdio.h>

int main(){
    int a,sum=0,digit;
    scanf("%d",&a);
    if(a%2==0)
       printf("Even");
    else
       printf("Odd");

    digit =na%10;
    sum  += digit;
    a=a/10; 
    if(a>0){
        digit = a%10;
        sum += digit;
    }
    printf("%d",sum);
    return 0;
}