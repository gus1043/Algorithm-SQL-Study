#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int slice, int n) {
    int answer = 0;
    
    int a = n/slice;
    int b = n%slice;
    if (b!=0){
        answer = a+1;
    }else{
        answer = a;
    }
    return answer;
}