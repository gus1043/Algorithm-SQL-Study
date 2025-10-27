#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int measure_count(int a){
    if (a == 1) return 1;
    
    int count = 0;
    for (int i = 1; i <= sqrt(a); ++i) {
        if (a % i == 0) {
            // i와 a/i가 같으면(제곱근인 경우), 약수 1개
            if (i * i == a) {
                count += 1;
            } else {
                // i와 a/i가 다르면, 약수 2개
                count += 2;
            }
        }
    }
    return count;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    vector<int> measure_v;
    
    for(int i=1;i<number+1;i++){
        if(measure_count(i)>limit){
            answer+=power;
        }else answer+=measure_count(i);
    }
    
    return answer;
}