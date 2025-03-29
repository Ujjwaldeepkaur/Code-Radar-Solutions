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
    if(n == 4){
        printf("A\nA B\nA B C\nA B C D");
    }
    if(n == 5){
        printf("A\nA B\nA B C\nA B C D\nA B C D E");
    }
    if(n == 6){
        printf("A\nA B\nA B C\nA B C D\nA B C D E\nA B C D E F");
    }
    if(n == 7){
        printf("A\nA B\nA B C\nA B C D\nA B C D E\nA B C D E F\nA B C D E F G");
    }
}