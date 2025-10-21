#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    int start = my_string.length()-n;
    string answer = my_string.substr(start, my_string.length());
    return answer;
}