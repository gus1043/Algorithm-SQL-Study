#include <string>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

vector<int> solution(int num, int total) {
    int start = total/num - ((num-1)/2);
    vector<int> answer;
    
    for (int i=0;i<num;i++){
        answer.push_back(start+i);
    }
    
    return answer;
}