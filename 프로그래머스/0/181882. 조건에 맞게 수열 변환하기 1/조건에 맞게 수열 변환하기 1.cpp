#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for (int c : arr){
        if (c>=50 && c%2==0){
            answer.push_back(c/2);}
        else if(c<50 && c%2==1){answer.push_back(c*2);}
        else{answer.push_back(c);}
    }
    return answer;
}