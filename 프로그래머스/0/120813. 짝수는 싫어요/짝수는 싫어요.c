#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int size;
    if (n%2 == 0) {
        size=n/2;
    }else{
        size=n/2+1;
    }
    int* answer = (int*)malloc(sizeof(int)*size);
    
    int k=0;
    for (int i=1;i<=n;i++){
        if (i%2 != 0){
            answer[k]=i;
            k++;
        }
    }
    return answer;
}