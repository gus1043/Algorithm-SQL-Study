#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int lcm(int a, int b){
    return (a*b) / std::gcd(a,b);
}

int solution(vector<int> arr) {
    int answer = arr[0];
    
    for (int i=1;i<arr.size();i++){
        answer = lcm(answer, arr[i]);
    }
    
    return answer;
}