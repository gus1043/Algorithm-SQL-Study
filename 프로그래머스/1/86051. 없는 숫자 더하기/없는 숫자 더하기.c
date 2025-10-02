#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = -1;
    int goal = 45;
    int sum = 0;
    for (int i=0;i<numbers_len;i++){
        sum += numbers[i];
    }
  
    return goal-sum;
}