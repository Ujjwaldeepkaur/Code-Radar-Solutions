#include <stdio.h>

int lowestsetbitposition(int num){
    int(num == 0){
        returb -1;
    }
    return __builtin_ctz(num);
}
int main(){
    int num;
    scanf("%d",&num);
    int position = lowestsetbitposition(num);
    printf("%d\n",position);
    return 0;
}