#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int count=0;
    for (char c:n_str){
        if(c!='0'){
            break;
        }count++;
    }
    answer = n_str.substr(count, n_str.length());
    return answer;
}