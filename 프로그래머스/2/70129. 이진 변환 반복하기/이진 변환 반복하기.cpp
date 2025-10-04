#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string trans (int a){
    string s = "";
    if(a==0) return 0;
    while (a>0){
        s+=to_string(a%2);
        a = a/2;
    }
    reverse(s.begin(), s.end());
    return s;
}
vector<int> solution(string s) {
    vector<int> answer;
    int zero_count=0;
    int trans_count=0;
    
    while (s!="1"){
        trans_count++;
        
        zero_count += std::count(s.begin(), s.end(), '0');
        s.erase(std::remove(s.begin(), s.end(),'0'), s.end());
                                
        int length=s.length();
        s = trans(length);
        
    }
    
    answer = {trans_count, zero_count};
     
    return answer;
}