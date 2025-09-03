#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    
    if (num1 > num2){
        return 1;
    }
    if (num1<num2){
        return -1;
    } return 0;
    
}

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    qsort(array, array_len, sizeof(int), compare);
    
    int mid_index = array_len/2;

    return array[mid_index];
}