#include <stdio.h>
int getnthbit(int number, int n){
    return(number >> n)&1;
}
int main(){
    int number, n;
    scanf("%d %d",&number, &n);
    printf("%d\n",getnthbit(number, n));

    return 0;
}