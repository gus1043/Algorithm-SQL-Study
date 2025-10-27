#include <string>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> scores;
    string current_score = "";
    
    for(char c:dartResult){
        if(isdigit(c)){
            current_score+=c;
            
        }else { 
             if (!current_score.empty()) {
                scores.push_back(stoi(current_score));
                current_score = "";
            }

            int last_idx = scores.size() - 1;
        
            if (c == 'S') {
            } else if (c == 'D') {
                scores[last_idx] = pow(scores[last_idx], 2);
            } else if (c == 'T') {
                scores[last_idx] = pow(scores[last_idx], 3);
            } else if (c == '*') {
                scores[last_idx] *= 2;
                if (last_idx > 0) {
                    scores[last_idx - 1] *= 2;
                }
            } else if (c == '#') {
                scores[last_idx] *= -1;
            }

        }
        
        
    }
    
    answer = accumulate(scores.begin(), scores.end(), 0);
    return answer;

}