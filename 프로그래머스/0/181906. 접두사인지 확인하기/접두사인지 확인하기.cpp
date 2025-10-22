#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    string sub = my_string.substr(0, is_prefix.length());
    if (sub == is_prefix) return 1;
    return answer;
}