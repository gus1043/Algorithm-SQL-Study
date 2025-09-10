#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(s);
    int* answer = (int*)malloc(sizeof(int)*len);
    
    // 각 문자의 가장 최근 위치를 저장하는 배열. 소문자 'a'~'z' (26개)
    // 인덱스 0은 'a', 1은 'b' ... 25는 'z'에 대응
    int last_pos[26];
    
    // last_pos 배열을 -1로 초기화.
    // 이는 아직 문자가 등장하지 않았음을 의미합니다.
    memset(last_pos, -1, sizeof(last_pos));
    
    for (int i=0; i<len; i++){
        char current_char = s[i];
        int char_index = current_char - 'a';
        
        if(last_pos[char_index]==-1){
            answer[i]=-1;
        } else {
            answer[i] = i - last_pos[char_index]; 
        }
        last_pos[char_index] = i;
    }
    return answer;
}