#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int idx= 0;
    
    for (int i=0; i< goal.size();i++){
        if (goal[idx]==cards1[0]){
                idx++;
                cards1.erase(cards1.begin());
            }
        else if (goal[idx]==cards2[0]){
                idx++;
                cards2.erase(cards2.begin());
            }
        else {
            return answer = "No";
        }
    }
    return answer;
}