#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 제일 큰거 2개
// 제일 작은 거 2개 비교

int solution(vector<int> numbers) {
    
    sort(numbers.begin(), numbers.end());
    
    int max = numbers[numbers.size()-1]*numbers[numbers.size()-2];
    int min = numbers[0]*numbers[1];
    
    if(max>min) return max;
    else return min;
}