#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char** solution(const char* strArr[], size_t strArr_len) {
    char** answer = (char**)malloc(strArr_len*sizeof(char*));
    int index = 0;
    
    for (int i = 0; i < strArr_len; i++) {
        if (strstr(strArr[i], "ad") == NULL) {
            answer[index] = strArr[i];
            index++;
        }
    }
        
    return answer;
}