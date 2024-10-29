#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int countDivisors(int num){
    int count = 0;
    
    for(int i=1;i<=num;i++){
        if(num%i==0)
            count++;
    }
    return count;
}

int solution(int n) {
    int compositeCount = 0;

    for(int i=4;i<=n;i++){
        if(countDivisors(i)>=3)
            compositeCount++;
    }
    return compositeCount;
}