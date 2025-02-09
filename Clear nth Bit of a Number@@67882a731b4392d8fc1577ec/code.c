#include <stdio.h>

int clearnthbit(int number, int n){
    int mask = 1 <<n;
    mask = ~mask;
    return number & mask;
}
int main(){
    int number,n;
    scanf("%d %d",&number,&n);
    printf("%d\n",clearnthbit(number, n));
    return 0;
}