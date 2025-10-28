#include <string>
#include <stack>
#include <vector>
#include <unordered_map>

using namespace std;

unordered_map<char, char> bracketPair = {{')','('},{'}','{'},{ ']','['} }; //닫힌 괄호로 key를 잡음

bool isValid(string &s, int start){
    stack<char> stk;
    unsigned int sz = s.size();
    
    
    for(int i=0;i<sz;i++){
        char ch = s[(start+i)%sz];
        //ch가 닫힌 괄호인 경우
        if(bracketPair.count(ch)){
            //닫혔는데 스택에 든거 없거나 짝 없으면 false
            if(stk.empty() || stk.top()!=bracketPair[ch])
                return false;
            //있으면 그거 pop함 
            stk.pop();
        }else{
            stk.push(ch); //열린괄호면 그냥 푸시
        }
    }
    //스택이 비면 true (괄호 짝 맞음)
    return stk.empty();
}

int solution(string s) {
    int answer = 0;
    int n = s.size();
    
    for(int i=0;i<n;i++){
        answer+=isValid(s,i);
    }
    return answer;
}