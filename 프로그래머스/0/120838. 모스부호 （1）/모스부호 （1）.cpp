#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, string> morse { 
        {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},
        {".","e"},{"..-.","f"},{"--.","g"},{"....","h"},
        {"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
        {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},
        {"--.-","q"},{".-.","r"},{"...","s"},{"-","t"},
        {"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
        {"-.--","y"},{"--..","z"}
    };

    stringstream ss(letter);
    string mos;
    while (ss >> mos) {
        auto it = morse.find(mos);
        if (it != morse.end()) {
            answer += it->second;
        }
    }
    return answer;
}