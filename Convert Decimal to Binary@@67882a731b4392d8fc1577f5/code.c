#include <stdio.h>
void printbinary(int num){
    for(int i=31; i>=0; i--){
        int bit = (num >> i) & 1;
        printf("%d",bit);
    }
    printf("\n");
}
int main(){
    int num;
    
    scanf("%d",&num);
    printbinary(num);
    return 0;
}