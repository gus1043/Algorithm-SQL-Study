#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    // "A", "B", "C" 순서대로 문자가 할당 - 한 번 누르면 "A", 두 번 누르면 "B", 세 번 누르면 "C"
    // 키를 최소 몇 번 눌러야 그 문자열을 작성
    
    //1번 키부터 차례대로 할당된 문자들이 순서대로 담긴 문자열배열 keymap
    //문자열들이 담긴 문자열 배열 targets
    
    // 키를 최소 몇 번씩 눌러야 하는지 순서대로 배열, 목표 문자열을 작성할 수 없을 때는 -1
    
    map<char, int> key_count;
    
    for (const string& s : keymap) {
        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            // 맵에 해당 문자가 없거나, 현재 입력 횟수가 기존보다 더 적은 경우 갱신
            if (key_count.find(c) == key_count.end() || key_count[c] > i + 1) {
                key_count[c] = i + 1;
            }
        }
    }
    
    //targets 
    int temp=0;
    int warning = 0 ;
    for(int i=0;i<targets.size();i++){
        for(char c:targets[i]){
            if(key_count.find(c)!=key_count.end()){
                temp+=key_count[c];
            }
            else{
                warning = 1;
            }
        }
        if(warning!=1){
            answer.push_back(temp);
        }else{
            answer.push_back(-1);
        }
        
        temp=0;
        warning=0;
    }

    return answer;
}