#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1; //처음 한번 바르는 걸로 초기화
    int roller = section[0]+m;
    
    for(int i=0;i<section.size();i++){
        if(roller<=section[i]){
            answer++;
            roller = section[i]+m;
        }
        
    }
    
    return answer;
}