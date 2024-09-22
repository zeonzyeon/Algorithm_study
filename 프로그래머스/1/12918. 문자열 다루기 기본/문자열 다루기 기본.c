#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

bool solution(const char* s) {
    int len = strlen(s);
    bool answer = true;
    
    if(len!=4 && len!=6){
        answer = false;
    }
    
    while(*s){
        if(!isdigit(*s))
            answer = false;
        s++;
    }
    
    return answer;
}