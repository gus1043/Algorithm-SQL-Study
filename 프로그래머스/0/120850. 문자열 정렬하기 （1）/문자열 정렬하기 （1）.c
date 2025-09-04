#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    
    if (num1>num2){
        return 1;
    }else if (num1<num2){
        return -1; 
    }else{
        return 0;
    }
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int string_length = strlen(my_string);
    int digit_count = 0;
    
    for (int i=0;i<string_length;i++){
        if (isdigit(my_string[i])){
            digit_count++;
        }
    }
    int* answer = (int*)malloc(sizeof(int)*digit_count);
    int idx=0;
    
    for (int i=0;i<string_length;i++){
        if (isdigit(my_string[i])){
            // '0'을 빼서 아스키 코드를 실제 숫자로 변환
            answer[idx++]=my_string[i]-'0';
        }
    }
    
    qsort(answer, digit_count, sizeof(int), compare);
    
    return answer;
}