#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* solution(int n) {
    int* answer = NULL;
    int index = 0; 
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            answer = (int*)realloc(answer, sizeof(int)*(index+1));
            answer[index++]=i;
        }
    }
    
    return answer;
}