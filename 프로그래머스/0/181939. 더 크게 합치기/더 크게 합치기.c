#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char str1[10], str2[10];
    
    sprintf(str1, "%d%d", a, b);
    sprintf(str2, "%d%d", b, a);
    
    if (strcmp(str1, str2) >= 0) {
        return atoi(str1);
    } else {
        return atoi(str2);
    }
}