#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> score_tmp;
    for(int i =0; i<score.size();i++){
        score_tmp.push_back(score[i]);
        sort(score_tmp.begin(), score_tmp.end(), greater<int>());
        
        if(score_tmp.size()>k){
            answer.push_back(score_tmp[k-1]);
        }else{
            answer.push_back(score_tmp[score_tmp.size()-1]);
        }
        
    }
    return answer;
}