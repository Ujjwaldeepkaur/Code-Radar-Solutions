#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i == 1){
        printf("*");
    }
    if(i == 2){
        printf(" *\n**");
    }
    if(i == 3){
        printf("  *\n **\n***");
    }
    if(i == 4){
        printf("   *\n  **\n ***\n****");
    }
    if(i == 5){
        printf("    *\n   **\n  ***\n ****\n*****");
    }
    if(i == 6){
        printf("     *\n    **\n   ***\n  ****\n *****\n******");
    }
    if(i == 7){
        printf("      *\n     **\n    ***\n   ****\n  *****\n ******\n*******");
    }
    return 0;
}