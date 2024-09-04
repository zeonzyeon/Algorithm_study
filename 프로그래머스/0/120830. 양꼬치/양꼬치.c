#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int service = n/10;
    
    if(k>0)
        k-=service;
    
    answer=12000*n+2000*k;
    
    return answer;
}