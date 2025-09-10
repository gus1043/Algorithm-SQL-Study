#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// food_len은 배열 food의 길이입니다.
char* solution(int food[], size_t food_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len=1;
    for (int i = 0; i < food_len; i++) {
        len += (food[i] / 2) * 2;
    }

    char* answer = (char*)malloc(sizeof(char)*(len+1));
    
    int k = 0;
    
    for (int i=1; i<food_len;i++){
        for (int j=0;j<food[i]/2;j++){
            answer[k++] = i+'0';
        }
    }
    
    answer[k++]='0';
    
    for (int i=food_len-1; i>0;i--){
        for (int j=0;j<food[i]/2;j++){
            answer[k++] = i+'0';
        }
    }
    answer[k]='\0'; 
    
    return answer;
}