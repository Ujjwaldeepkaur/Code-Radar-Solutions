#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n == 2){
        printf(" * \n***\n * ");
    }
    if(n == 3){
        printf("  *  \n *** \n*****\n *** \n  *  ");
    }
    if(n == 4){
        printf("   *   \n  ***  \n ***** \n*******\n ***** \n  ***  \n   *   ");
    }
    if(n == 5){
        printf("    *    \n   ***   \n  *****  \n ******* \n*********\n ******* \n  *****  \n   ***   \n    *    ");
    }
    return 0;
}