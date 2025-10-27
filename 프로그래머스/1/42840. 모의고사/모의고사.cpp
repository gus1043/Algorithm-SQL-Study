#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> scores={0,0,0,0};
    
    //1번 12345
    vector<int> first = {1,2,3,4,5}; 
    int first_score = 0;
    
    //2번 21232425
    vector<int> second = {2,1,2,3,2,4,2,5}; 
    int second_score = 0;
    
    //3번 3311224455
    vector<int> third = {3,3,1,1,2,2,4,4,5,5};
    int third_score = 0;
    
    for(int i=0;i<answers.size();i++){
        if(answers[i]==first[i%first.size()]){
            scores[1]++;
        }
        if(answers[i]==second[i%second.size()]){
            scores[2]++;
        }
        if(answers[i]==third[i%third.size()]){
            scores[3]++;
        }
    }
    
    int T= max_element(scores.begin(), scores.end())-scores.begin();
    //가장 큰 값은 일단 scores[T]
    for (int i=0;i<scores.size();i++){
        if(scores[i] == scores[T]){
            answer.push_back(i);
        }
    }
    
    
        
    
    
    
    return answer;
}