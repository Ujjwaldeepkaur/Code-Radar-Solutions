//Palindrome number

#include<stdio.h>
int main()
{
    int n,temp,ld,sum=0;
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        ld = n%10;
        sum =sum*10+ld;
        n =n/10;
    }
    printf("The reverse of the number is: %d\n",sum);

    if (sum==temp)
    {
        printf("Palindrome");
    }

    else
    {
        printf("Not Palindrome");
    }
    return 0;
}