#include <stdio.h>

int togglenthbit(int number, int n){
    return number^(1 << n);
}
int main(){
    int number,n;
    scanf("%d",&number);
    scanf("%d",&n);

    int result=togglenthbit(number,n);
    printf("%d",&result);
    return 0;
}