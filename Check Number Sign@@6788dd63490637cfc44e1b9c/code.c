#include <stdio.h>

int main(){
    int h;
    scanf("%d",&h);
    if(h>0){
        printf("Positive");
    }
    else if(h==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}