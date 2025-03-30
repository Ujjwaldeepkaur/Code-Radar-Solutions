#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i,j;
    for(i=0;i<=n;i++)
    {
        if(a[i]==a[j])
        {
            printf("%d",a[i]);
            break;
        }
    }
}