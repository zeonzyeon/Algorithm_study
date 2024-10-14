#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

char* solution(const char* my_string) {
    int len = strlen(my_string);
    char* answer = (char*)malloc((len+1)*sizeof(char));
    strcpy(answer, my_string);
    
    for(int i=0;i<len;i++){
        if(answer[i]<97){
            answer[i]+=32;
        }
    }
    
    qsort(answer,len, sizeof(char), compare);
    return answer;
}