#include <stdio.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len, int n) {
    int* result = (int*)malloc(num_list_len * sizeof(int));
    int index = 0;
    
    for(int i=n;i<num_list_len;i++){
        result[index++]=num_list[i];
    }
    
    for(int i=0;i<n;i++){
        result[index++]=num_list[i];
    }
    
    return result;
}