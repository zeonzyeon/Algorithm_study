#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int count = 0;
    
    count += hp / 5; 
    hp %= 5;
    
    count += hp / 3;
    hp %= 3;
    
    count += hp;
    
    return count;
}