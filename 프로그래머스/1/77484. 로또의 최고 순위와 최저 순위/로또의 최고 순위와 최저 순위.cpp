#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int zero=count(lottos.begin(), lottos.end(), 0);
    int count=0;
    
    for(int i=0;i<win_nums.size();i++){
        if(find(win_nums.begin(), win_nums.end(), lottos[i])!=win_nums.end()){
            count++;
        }
    }
    
    //최고점수는 기존+0이 원래꺼랑 맞다
    //최저 점수는 기존꺼만 맞다
    
    int max = zero + count;
    int min = count;
    
    cout<<max<<endl;
    cout<<min<<endl;
    
    if(max==6){
        answer.push_back(1);
    }else if(max==5){
        answer.push_back(2);
    }else if(max==4){
        answer.push_back(3);
    }else if(max==3){
        answer.push_back(4);
    }else if(max==2){
        answer.push_back(5);
    }else{
        answer.push_back(6);
    }
    
    if(min==6){
        answer.push_back(1);
    }else if(min==5){
        answer.push_back(2);
    }else if(min==4){
        answer.push_back(3);
    }else if(min==3){
        answer.push_back(4);
    }else if(min==2){
        answer.push_back(5);
    }else{
        answer.push_back(6);
    }
    
    return answer;
}