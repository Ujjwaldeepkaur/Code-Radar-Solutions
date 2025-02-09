#include <stdio.h>
void printbinary(int num){
    for(int i=2; i>=0; i--){
        int bit = (num >> i) & 1;
        printf("%d",bit);
    }
    printf("\n");
}
int main(){
    int num;
    printf("Enter a decimal number:");
    scanf("%d",&num);
    printBinary(num);
    return 0;
}