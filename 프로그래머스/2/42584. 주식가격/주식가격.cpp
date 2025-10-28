#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size());
    stack<int> stk;
    
    int priceNum = prices.size();
    
    for (int i=0;i<prices.size();i++){
        while(!stk.empty() && prices[stk.top()] > prices[i]){
            answer[stk.top()]=i-stk.top();
            stk.pop();
        }
        stk.push(i); //인덱스를 스택에 넣음 
    }
    
    while(!stk.empty()){
        answer[stk.top()] = priceNum-stk.top()-1;
        stk.pop();
    }
    return answer;
}