#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n == 1){
        printf("A");
    }
    if(n == 2){
        printf("A\nA B");
    }
    if(n == 3){
        printf("A\nA B\nA B C");
    }
}