#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> set_answer;
    
    for(int i=0;i<numbers.size()-1;++i){
        for(int j=i+1;j<numbers.size();++j){
            set_answer.insert(numbers[i]+numbers[j]);
        }
    }
    
    vector<int> answer(set_answer.begin(), set_answer.end());

    return answer;
}