#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";
    for(char c: myString){
        if(c=='a'){
            answer+='A';
        }else if(c>'A') {answer+=tolower(c);}else{answer+=c;}
    }
    return answer;
}