#include<stdio.h>
int main(){
    int t1=0;
    int t2=1;
    int nt,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d",t1);
        nt=t1+t2;
        t1=t2;
        t2=nt;
    }
    return 0;
}