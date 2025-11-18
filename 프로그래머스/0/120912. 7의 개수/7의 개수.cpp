#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    
    for(int k : array){
        string s = to_string(k);
        for(char c : s){
            if(c=='7') answer++;
        }
    }
    return answer;
}