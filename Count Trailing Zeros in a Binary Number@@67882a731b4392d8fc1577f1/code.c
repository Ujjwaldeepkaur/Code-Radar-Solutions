#include <stdio.h>

int counttrailingzeros(unsigned int num)
{
    if(num==0)return 32;
    int count=0;
    while((num&1)==0)
    {
        count++
        num>>=1;
    }
    return count;
}
int main()
{
    unsigned int num;
    scanf("%u",&num);
    printf("%d\n",counttrailingzeros(num));
    return 0;
}