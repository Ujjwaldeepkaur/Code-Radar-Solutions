#include<stdio.h>
int fibonacciseries()
{
    int n;
    int a=0,b=1,sum;

    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
      printf("%d\n",a);
      sum =a+b;
      a=b;
      b=sum;
    }

}
