#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    string str="";
    
    for(char c: myString){
        if(c=='A') str+='B';
        else str+='A';
    }
    if(str.find(pat)!=string::npos){
        return 1;
    }return 0;
}