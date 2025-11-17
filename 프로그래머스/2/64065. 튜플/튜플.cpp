#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
using namespace std;

vector<int> solution(string s) {
    unordered_map<int, int> m;
    string tmp = "";
    for (int i=2; i<s.size(); i++) {
        if (isdigit(s[i])) {
            tmp+=s[i];
        }
        
        if (!isdigit(s[i]) &&tmp!=""){
            m[stoi(tmp)]++;
            tmp="";
        }
    }
    int size = m.size();// 등장하는 수의 개수
    vector<int> answer(size);
    for (auto c : m) answer[size - c.second] = c.first;
    return answer;
}