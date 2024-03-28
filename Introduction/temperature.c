//2nd Program where we ill be converting Celsius to Fahreheit
#include<stdio.h>
main(){
    int fahr,cel;
    int low,high,step;
    low = 0;
    high = 300;
    step = 20;
    fahr = low;
    while(fahr<=high){
        cel = 5*(fahr - 32)/9;
        printf("%d\t%d\n",fahr,cel);
        fahr = fahr + step;
    }
}