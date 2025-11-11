#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int tmp = 0;
    for(int i=0;i<numLog.size();i++){
        if(i!=0)
        {
            int diff = numLog[i]-numLog[i-1];
            if(diff==1) answer+= 'w';
            else if (diff==-1) answer+= 's';
            else if (diff==10) answer+= 'd';
            else answer+= 'a';
            tmp = numLog[i];
        }
    }
    return answer;
}