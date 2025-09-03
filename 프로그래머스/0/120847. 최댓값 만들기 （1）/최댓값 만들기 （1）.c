#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    
    if (num1 < num2){
        return 1;
    }else {
        return -1;
    }
}

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {

    qsort(numbers, numbers_len,sizeof(int),compare);
    return numbers[0]*numbers[1];
}