#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int int_comp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

// tangerine_len은 배열 tangerine의 길이입니다.
int solution(int k, int tangerine[], size_t tangerine_len) {
    int answer = 0;
    int *counter = calloc(10000001, sizeof(int));
    int i;
    for (i = 0; i < tangerine_len; i++) {
        counter[tangerine[i]]++;
    }

    qsort(counter, 10000001, sizeof(int), int_comp);


    for (i = 0; i < 10000001; i++) {
        answer++;
        k -= counter[i];
        if (k <= 0) break;
    }
    free(counter);
    return answer;
}