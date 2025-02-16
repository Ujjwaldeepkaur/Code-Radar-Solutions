#include<stdio.h>
int main()
{
    int a,b,i,count1=0,count2;
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);
    for (i=2;i<=a/2;i++)
    {
        if (a%i==0)
        {
            count1 =1;
            break;
        }

        else
        {
            count1 =0;
        }

    }

     for (i=2;i<=b/2;i++)
    {
        if (a%i==0)
        {
            count2 =1;
            break;
        }

        else
        {
            count2 =0;
        }

    }

    if (count1==0 && count2==0 && (a-b==2 || b-a==2))
    {
        printf("Twin Prime\n");
    }

    else
    {
        printf("Not Twin Prime\n");
    }
return 0;
}
