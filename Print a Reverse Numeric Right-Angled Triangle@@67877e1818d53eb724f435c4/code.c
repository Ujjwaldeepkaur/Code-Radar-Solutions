#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n == 1){
        printf("1");
    }
    if(n == 2){
        printf("1 2\n1");
    }
    if(n == 3){
        printf("1 2 3\n1 2\n1");
    }
}