#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;

    for(int i=0;i<n/k;i++){
        answer.push_back(k*(i+1));
    }
    return answer;
}