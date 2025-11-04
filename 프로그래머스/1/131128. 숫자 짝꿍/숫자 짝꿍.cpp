#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    //임의의 자리에서 공통으로 나타나는 정수 k들을 이용하여 가장 큰 정수 두 수 = 짝꿍
    //X, Y의 짝꿍이 존재하지 않으면  -1
    //X, Y의 짝꿍이 0으로만 구성되어 있다면, 0
     
    vector <int> countx(10);
    vector <int> county(10);
    
    for(char c:X){
        countx[c-'0']++;
    }
    for(char c:Y){
        county[c-'0']++;
    }
    
    for(int i=9;i>=0;i--){
        int common = min(countx[i], county[i]);
        for(int j=0;j<common;j++){
            answer+=to_string(i);
        }
        
    }
    if(answer==""){return "-1";}
    if(answer[0]=='0'){return "0";}
    
    
    return answer;
}