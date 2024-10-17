#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(const char* binomial) {
    int a, b;
    char op;

    sscanf(binomial, "%d %c %d", &a, &op, &b);

    if (op == '+') {
        return a + b;
    } else if (op == '-') {
        return a - b;
    } else if (op == '*') {
        return a * b;
    }

    return 0;
}