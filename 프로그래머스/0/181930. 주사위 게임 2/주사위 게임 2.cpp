#include <string>
#include <vector>
#include <cmath>
#include <set>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;
    vector <int> roll = {a, b, c};
    set <int> set_roll(roll.begin(), roll.end());
    
    //갯수가 같은지 다른지 비교
    if(set_roll.size()==3){
        answer = a+b+c;
    }else if(set_roll.size()==2){
        answer = (a+b+c)*(pow(a,2)+pow(b,2)+pow(c,2));
    }else {
        answer = (a+b+c)*(pow(a,2)+pow(b,2)+pow(c,2))*(pow(a,3)+pow(b,3)+pow(c,3));
    }
    
    return answer;
}