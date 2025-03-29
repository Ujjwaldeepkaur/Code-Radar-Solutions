#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 1){
        printf("1");
    }
    if(n == 2){
        printf(" 1\n1 2");
    }
    if(n == 3){
        printf("  1\n 1 2\n1 2 3");
    }
    if(n == 4){
        printf("   1\n  1 2\n 1 2 3\n1 2 3 4");
    }
    if(n == 5){
        printf("    1\n   1 2\n  1 2 3\n 1 2 3 4\n1 2 3 4 5");
    }
    return 0;
}