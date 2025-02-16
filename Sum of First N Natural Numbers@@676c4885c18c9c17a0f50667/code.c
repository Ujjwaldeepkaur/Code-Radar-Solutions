//Sum of even and odd digits of a number

#include<stdio.h>
int main()
{
    int n,ld,sum1=0,sum2=0;
    printf("Enter number:");
    scanf("%d",&n);
    while (n>0)
    {
        ld=n%10;
        if (ld%2==0)
        {
            sum1=sum1+ld;
        }
        else
        {
            sum2=sum2+ld;
        }
        n=n/10;
    }

    printf("The sum of all even digits in the number: %d\n",sum1);
    printf("The sum of all odd digits in the number: %d\n",sum2 );
    return 0;
}
