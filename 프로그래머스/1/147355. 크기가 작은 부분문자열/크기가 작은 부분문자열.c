#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* t, const char* p) {
    int answer = 0;
    int len_t = strlen(t);
    int len_p = strlen(p);
    
    char* temp_str = (char*)malloc(sizeof(char)*(len_p+1));
    long long p_long = atoll(p);
    
    for (int i=0;i<len_t-len_p+1;i++){
        strncpy(temp_str, t+i, len_p);
        temp_str[len_p]='\0';
        
        long long temp_long = atoll(temp_str);
        
        if (temp_long<=p_long){
            answer +=1;
        }
    }
    return answer;
}