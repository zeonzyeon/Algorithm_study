#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    int size = start_num - end_num + 1;
    int* result = (int*)malloc(size*sizeof(int));
    int index = 0;
    
    for(int i=start_num;i>=end_num;i--){
        result[index++]=i;
    }
    
    return result;
}