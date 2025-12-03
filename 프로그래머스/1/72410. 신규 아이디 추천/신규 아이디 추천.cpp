#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";
    //1단계 - new_id의 모든 대문자를 대응되는 소문자로 치환합니다.
    transform(new_id.begin(), new_id.end(), new_id.begin(), ::tolower);
    
    // 2단계: 알파벳 소문자, 숫자, 빼기(-), 밑줄(_), 마침표(.)를 제외한 모든 문자 제거
    string temp_id;
    for (char c : new_id) {
        if (isalnum(c) || c == '-' || c == '_' || c == '.') {
            temp_id += c;
        }
    }
    new_id = temp_id;

    // 3단계: 연속된 마침표(.)를 하나로 치환
    temp_id = "";
    bool last_was_dot = false;
    for (char c : new_id) {
        if (c == '.') {
            if (!last_was_dot) {
                temp_id += c;
                last_was_dot = true;
            }
        } else {
            temp_id += c;
            last_was_dot = false;
        }
    }
    new_id = temp_id;
    
    //new_id에서 마침표(.)가 처음이나 끝에 위치한다면 제거합니다.
    while(new_id.front() == '.' ){
        new_id.erase(0,1);
    }
    
    while(new_id.back() == '.'){
        new_id.pop_back();
    }
    
    //new_id가 빈 문자열이라면, new_id에 "a"를 대입합니다.
    if (new_id==""){
        new_id = "a";
    }
    
    //new_id의 길이가 16자 이상이면,
    if(new_id.length() >= 16){
        new_id = new_id.substr(0,15);
        if (new_id.back() == '.') {
            new_id.pop_back();
        }
    }
    
    //new_id의 길이가 2자 이하?
    if(new_id.length() <= 2){
        while(new_id.length()<3){
            new_id+=new_id.back();
        }
    }
    return new_id;
}