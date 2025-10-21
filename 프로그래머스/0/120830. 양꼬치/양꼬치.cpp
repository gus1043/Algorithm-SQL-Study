#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    //10인분 >> 음료수 1개
    // 양꼬치 12000 음료 2000
    int sheep = n*12000;
    int beverage = (k-(n/10)) *2000;
    answer = sheep+beverage;
    return answer  ;
}