#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int max(int a, int b){
    return a>b?a:b;
}

int min(int a, int b){
    return a<b?a:b;
}

int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int minmax = 0;
    int maxmax = 0;
    
    for (size_t i=0; i<sizes_rows;i++){
        
        int w = sizes[i][0];
        int h = sizes[i][1];
        
        int current_max = max(w,h);
        int current_min = min(w,h);
            
        maxmax = max(current_max, maxmax);
        minmax = max(current_min, minmax);
        
    }
    
    answer = minmax*maxmax;
    return answer;
}