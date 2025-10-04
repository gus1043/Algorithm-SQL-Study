#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long gcd(int a, int b){
    while (b!=0){
        int temp = a%b;
        a = b;
        b=temp; 
    }
    return a;    
}

long long solution(int w, int h) {
    long long answer = 1;
    
    // 전체 
    long long total_rectangle = (long long)w*h;
    
    //불가능 사각형 
    long long delete_rectangle = (long long)w+h-gcd(w,h);
    
    answer = total_rectangle - delete_rectangle;
    return answer;
}