#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=1 && n<=12)
    {
    switch(n)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
        printf("31");
        break;

        case 2:
        printf("28");
        break;

        case4:case6:case9:case11:
        printf("30");
        break;
    }
    }
    else{
        printf("Invalid month");
    }
    return 0;
}