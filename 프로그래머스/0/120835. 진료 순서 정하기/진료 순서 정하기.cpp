#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size());
    
    //큰 수 부터 정렬
    vector<int> sorted_emergency(emergency.begin(), emergency.end());
    sort(sorted_emergency.begin(), sorted_emergency.end(), greater<int>());
    
    for(int i=0;i<emergency.size();i++){
        for(int j=0;j<emergency.size();j++){
            if(emergency[j]<=sorted_emergency[i]){
                answer[j]++;
            }
        }
    }
    return answer;
}