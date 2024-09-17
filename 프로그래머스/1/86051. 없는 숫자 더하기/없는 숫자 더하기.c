#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int numbers[], size_t numbers_len) {
    int answer[10]={0,1,2,3,4,5,6,7,8,9};
    bool exist_num[10]={false};
    int exist_sum = 0;
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(numbers[i]==answer[j]){
                exist_num[j]=true;
            }
        }
    }
    for(int i=0;i<10;i++){
        if(exist_num[i]==false){
            exist_sum+=answer[i];
        }
    }
    return exist_sum;
}