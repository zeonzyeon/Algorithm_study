#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string) {
    int length = strlen(my_string);
    char* answer = (char*)malloc(sizeof(char) * (length + 1));
    
    int index = 0;
    for (int i = 0; i < length; i++) {
        if (my_string[i] != 'a' && my_string[i] != 'e' && my_string[i] != 'i' && my_string[i] != 'o' && my_string[i] != 'u') {
            answer[index++] = my_string[i];
        }
    }
    
    answer[index] = '\0';
    return answer;
}