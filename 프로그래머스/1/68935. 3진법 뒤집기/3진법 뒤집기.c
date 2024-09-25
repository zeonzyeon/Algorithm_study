#include <stdio.h>
#include <math.h>

int solution(int n) {
    int ternary[100];
    int index = 0;
    
    while (n > 0) {
        ternary[index++] = n % 3;
        n /= 3;
    }
        
    int result = 0;
    for (int i = 0; i < index; i++) {
        result += ternary[i] * pow(3, index - i - 1);
    }

    return result;
}