#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    for (int i = 0; i < my_string.length();) {
        if (find(vowels.begin(), vowels.end(), my_string[i]) != vowels.end()) {
            my_string.erase(my_string.begin() + i); //삭제되면 한칸씩 당겨지므로 i를 올리지 않음
        } else {
            i++;
        }
    }
    return my_string;
}
