#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for (int i=0;i<my_string.length(); i++){
        if(isupper(my_string[i])) answer+=tolower(my_string[i]);
        else answer+=toupper(my_string[i]);
    }
    return answer;
}