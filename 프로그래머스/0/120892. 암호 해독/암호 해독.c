#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* cipher, int code) {
    int cipher_len = strlen(cipher);
    int size = cipher_len / code;
    char* answer = (char*)malloc(size + 1);
    int index = 0;
    
    for(int i=1;i*code<=cipher_len;i++){
        answer[index++]=cipher[code*i-1];
    }
    answer[index]='\0';
    
    return answer;
}