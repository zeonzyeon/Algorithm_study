#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* s) {
    int len = strlen(s);
    char* result = (char*)malloc((len+1)*sizeof(char));
    
    int index = 0;
    for(int i=0;i<len;i++){
        if(s[i]==' '){
            result[i] = ' ';
            index = 0;
        }else{
            if(index%2==0){
                if(s[i]>='a'&&s[i]<='z'){
                    result[i]=s[i]-32;
                }else{
                    result[i]=s[i];
                }
            }
            else{
                if(s[i]>='a'&&s[i]<='z'){
                    result[i]=s[i];
                }else{
                    result[i]=s[i]+32;
                }
            }
            index++;
        }
    }
    result[len]='\0';
    
    return result;
}