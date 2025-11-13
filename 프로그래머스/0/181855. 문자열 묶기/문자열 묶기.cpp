#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    
    // 글자수대로 묶어서 max 
    map <int, int> count;
    
    for(string s : strArr){
        if(count.find(s.length())!=count.end()){
            count[s.length()]++;
        }else{
            count[s.length()]=1;
        }
    }
    
    auto max_it = max_element(count.begin(), count.end(),
        [](const auto& a, const auto& b) {
            return a.second < b.second; // value를 기준으로 비교
        });

    if (max_it != count.end()) {
        answer=max_it->second;
    }
    
    
    return answer;
}