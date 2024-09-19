#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(3*sizeof(char));
    int len = strlen(s);
    int count = 0;
    
    if(len%2==0){
        count=len/2-1;
        answer[0]=s[count];
        answer[1]=s[count+1];
        answer[2]='\0';
    }
    else{
        count=len/2;
        answer[0]=s[count];
        answer[1]='\0';
    }
    
    return answer;
}