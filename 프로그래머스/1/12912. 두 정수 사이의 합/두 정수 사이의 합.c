#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    int aa = a;
    int bb = b;
    long long answer = 0;
    
    if(a<b){
        while(aa<=b){
            answer+=aa;
            aa++;
        }
    }
    else if(a==b){
        answer=a;
    }
    else{
        while(a>=bb){
            answer+=bb;
            bb++;
        }
    }
    return answer;
}