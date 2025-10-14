#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    // yellow = (x-2)(y-2) => xy-2y-2x=yellow-4
    // brown + yellow = x*y
    
    int all = brown + yellow;
    int wplush = (all + 4 - yellow)/2;
    
    int left = 1;
    int right = wplush-1;
    
    for (int i=0;i<wplush/2;i++){
        if (left*right == all){
            answer = {right, left};
            break;
        }
        left++;
        right--;
    }
    
    return answer;
}