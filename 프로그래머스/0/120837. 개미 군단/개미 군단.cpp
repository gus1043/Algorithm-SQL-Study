#include <string>
#include <vector>

using namespace std;

//장군개미 5 / 병정개미 3 / 일개미 1
int solution(int hp) {
    int answer = 0;
    vector <int> ant = {5, 3, 1};
    for (int i=0;i<3;i++){
        answer += hp/ant[i];
        hp = hp%ant[i];
    }
    return answer;
}