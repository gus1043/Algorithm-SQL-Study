#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    char* answer = (char*)malloc(sizeof(char)*4);
    int year[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
     const char* day_names[] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};


    //1:31, 2:29, 3:31, 4:30, 5:31, 6:30, 7:31, 8:31, 9:30, 10:31, 11:30, 12:31
    //월 부터 1-->2 31일 지난거
    int total_days = 0;
    for (int i=0;i<a-1;i++){
        total_days+=year[i];//월만 계산했을때 요일 각 월의 1일임. 
    }
    
    total_days +=b;
    
    int idx = (total_days-1)%7;
    
    strcpy(answer, day_names[idx]);
    
    return answer;
}