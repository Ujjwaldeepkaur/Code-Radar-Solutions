#include<stdio.h>
int main()
{
    int a,rem,sum,num;
    sum=0;
    scanf("%d",&a);
    num=a;
    while(a != 0)
    {
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    printf("%d\n",sum);
    if(num==sum)
    printf("Armstrong number");
    else
    printf("Not an Armstrong number.");
    return 0;
}