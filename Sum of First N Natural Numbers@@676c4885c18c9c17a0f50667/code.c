//Fibonacci Series

#include<stdio.h>
int main()
{
    int a=0,b=1,n,sum,i;
    scanf("%d",&n);

    for (i=1;i<=n;i++)

    {   printf("%d\n",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;

}