#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(char*)a - *(char*)b);
}

int* solution(const char* my_string) {
    int len = strlen(my_string);
    int* answer = (int*)malloc(len*sizeof(int));
    int index = 0;
    
    for(int i=0;i<len;i++){
        if('0' <= my_string[i] && my_string[i] <= '9'){
            answer[index++]=my_string[i]-'0';
        }
    }
    qsort(answer, index, sizeof(int), compare);

    return answer;
}