#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int age) {
    char alphabet[] = "abcdefghij";
    char array[5];
    
    int index = 0;
    while(age > 0){
        array[index++] = alphabet[age % 10];
        age /= 10;
    }
    array[index] = '\0';
    
    char* result = (char*)malloc(sizeof(char) * (index + 1));
    for(int i = 0 ; i < index ; i++){
        result[i] = array[index-i-1];
    }
    result[index] = '\0';
    
    return result;
}