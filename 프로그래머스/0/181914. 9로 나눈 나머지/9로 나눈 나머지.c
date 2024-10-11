#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* number) {
    int result = 0;
    int len = strlen(number);
    int sum = 0;
    
    for(int i=0;i<len;i++){
        sum+=number[i]-'0';
    }
    
    result = sum % 9;
    return result;
}