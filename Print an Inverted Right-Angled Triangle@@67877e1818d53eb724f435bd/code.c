#include <stdio.h>

int main(){
    int h;
    scanf("%d",&h);
    for(int i=h; i>=1; i--){
        for(int j=1; j<=i; j++){
            printf("*");
            if(j<i){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}