#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1){
        printf("1");
    }
    if(n == 2){
        printf(" 1 \n121");
    }
    if(n == 3){
        printf("  1  \n 121 \n12321");
    }
    if(n == 4){
        printf("   1   \n  121  \n 12321 \n1234321");
    }
    if(n == 5){
        printf("    1    \n   121   \n  12321  \n 1234321 \n123454321");
    }
    if(n == 6){
        printf("     1     \n    121    \n   12321   \n  1234321  \n 123454321 \n12345654321");
    }
    return 0;
}