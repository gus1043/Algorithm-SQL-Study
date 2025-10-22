#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    
    // 가위2 바위0 보5
    
    for(int i=0;i<rsp.length(); i++){
        if(rsp[i]=='2') answer+="0";
        else if (rsp[i]=='0') answer+="5";
        else answer+="2";
    }
    return answer;
}