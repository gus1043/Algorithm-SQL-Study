#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";

    vector<string> s_numbers;
    
    for (int num : numbers){
        s_numbers.push_back(to_string(num));
    }

    sort(s_numbers.begin(), s_numbers.end(), [](const string& a, const string& b){
        return a + b > b + a;
    }); 
        
    if (s_numbers[0] == "0"){
        return "0";
    }
    
    for (const string& s : s_numbers){
        answer += s;
    }
    return answer;
}