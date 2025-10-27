#include <string>
#include <vector>
#include <iostream>

using namespace std;
//받아주는 개수 : a
//받는 개수 : b
//전체 콜라개수 : n
int solution(int a, int b, int n) {
    int answer = 0;
    int remain = 0 ;
    while (n>=a) {
        answer += n/a*b; //주고 받는 개수
        n = n/a*b + n%a;
    }
    return answer;
}