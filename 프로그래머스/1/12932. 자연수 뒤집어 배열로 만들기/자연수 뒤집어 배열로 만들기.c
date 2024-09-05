#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(long long n) {
    int digit_count=0;
    long long num=n;
    
    do{
        digit_count++;
        num/=10;
    }while(num>0);
        
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int* answer = (int*)malloc(digit_count*sizeof(int));
    num=n;
    
    for(int i=0;i<digit_count;i++){
        answer[i]=num%10;
        num/=10;
    }
    
    return answer;
}