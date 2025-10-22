#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    int ab = stoi(to_string(a)+to_string(b));
    int ba = stoi(to_string(b)+to_string(a));
    
    if(ab>ba) return ab;
    else return ba;
}