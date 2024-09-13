#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = false;
    int arr[5] = {-1,-1,-1,-1,-1};
    int sum = 0;
    int num = x;
    
    int i=0;
    while(x>0){
        arr[i++] = x%10;
        x/=10;
    }
    
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]!=-1){
            sum+=arr[i];
        }
    }
    
    if(num%sum==0){
        answer=true;
    }
    
    return answer;
}