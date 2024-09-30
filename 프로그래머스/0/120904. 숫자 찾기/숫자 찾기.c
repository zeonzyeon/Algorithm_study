#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int divisor = 1;
    int temp = num;
    
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    
    int count = 1; 
    while (divisor > 0) {
        int digit = num / divisor;
        if (digit == k) {
            return count;
        }
        num %= divisor;
        divisor /= 10;
        count++;
    }
    
    return -1;
}