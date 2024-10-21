#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int pizza = 1;
    while((pizza*6)%n!=0){
        pizza++;
    }
    return pizza;
}