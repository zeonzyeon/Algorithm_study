#include <stdio.h>
#include <stdlib.h>

int compare_asc(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int compare_desc(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    qsort(A, A_len, sizeof(int), compare_asc);
    
    qsort(B, B_len, sizeof(int), compare_desc);
    
    int sum = 0;
    for (size_t i = 0; i < A_len; i++) {
        sum += A[i] * B[i];
    }
    
    return sum;
}