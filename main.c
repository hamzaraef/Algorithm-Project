#include <stdio.h>
#include <stdlib.h>
int Maximum=0;int count=0;
int birthdayCakeCandles(int candles[], int n) {
    for(int i = 0; i < n; i++) {
            if(candles[i]>Maximum){
                Maximum=candles[i];
            }
            }
    for(int i = 0; i < n; i++){
        if(candles[i]==Maximum){
            count++;
        }
    }
    return count;
}


int main()
{   int n;
    printf("Please enter the age: ");
    scanf("%d",&n);
    int candlesHeight[n];
    for(int i=0;i<n;i++){
        printf("Please enter the candle number %d: ",i+1);
        scanf("%d",&candlesHeight[i]);
    }
    int CountOfMaximumHeight=birthdayCakeCandles(candlesHeight,n);
    printf("the maximum height has appeared %d times",CountOfMaximumHeight);
}
