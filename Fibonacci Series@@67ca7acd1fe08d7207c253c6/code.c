#include<stdio.h>
int fibonacciSeries(){
    if(n<1)
    {
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else{
        return fibonacciSeries(n-1)+fibonacciSeries(n-2)
    }
}