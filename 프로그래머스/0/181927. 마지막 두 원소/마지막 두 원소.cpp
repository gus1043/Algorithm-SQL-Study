#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer = num_list;
    int last_idx = num_list.size()-1;
    if(num_list[last_idx]>num_list[last_idx-1]){
        answer.push_back(num_list[last_idx]-num_list[last_idx-1]);
    }else {
        answer.push_back(num_list[last_idx]*2);
    }
    return answer;
}