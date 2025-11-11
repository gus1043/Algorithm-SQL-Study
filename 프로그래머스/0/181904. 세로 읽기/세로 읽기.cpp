#include <string>
#include <vector>

using namespace std;

// m : width
// c : column
string solution(string my_string, int m, int c) {
    string answer = "";
    
    for(int i=0;i<my_string.length()/m;i++){
        answer+=my_string[c+(m*i)-1];
    }
    return answer;
}