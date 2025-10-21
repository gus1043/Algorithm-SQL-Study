#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    //  ⊕
    int plus = stoi(to_string(a) + to_string(b));
    
    // 2 * a * b
    int multiply = 2*a*b;
    
    if (plus > multiply) return plus;
    else return multiply;
}