#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(int age) {
    string answer = "";
    vector<char> s = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    string age_s = to_string(age);
    
    for(char c : age_s){
        int idx = c-'0';
        answer+=s[idx];
    }
    return answer;
}