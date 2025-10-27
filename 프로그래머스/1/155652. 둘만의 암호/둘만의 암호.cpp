#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    for(int i=0;i<s.length();i++){
        char tmp = s[i];
        for(int j=0;j<index;j++){
            tmp = tmp+1;
            if(tmp > 'z'){
                tmp='a';
            }
            if(skip.find(tmp)!=string::npos){
                j--;
            }
        }
        answer+=tmp;
    }
    return answer;
}