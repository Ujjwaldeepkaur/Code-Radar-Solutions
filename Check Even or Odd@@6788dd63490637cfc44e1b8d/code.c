#include <stdio.h>

int main(){
    int a,sum=0,digit;
    scanf("%d",&a);
    if(a%2==0)
       printf("Even");
    else
       printf("Odd");

    int temp = a;
    while(temp != 0){
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }
    printf("%d\n",sum)
    return 0;
}