#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <utility>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    map<string, string> user_info;
    vector<pair<string, string>> order;
    
    for(const string& rec: record){
        stringstream ss(rec);
        string command , uid, uname;
        ss >> command >> uid >> uname;
        
        if(command == "Enter" || command == "Change"){
            user_info[uid]=uname;
        }
        
    }
    
    for(const string& rec : record){
        stringstream ss(rec);
        string command, uid, uname;
        ss>>command>>uid>>uname;
        
        if(command == "Enter"){
            answer.push_back(user_info[uid]+"님이 들어왔습니다.");
        } else if (command == "Leave"){
            answer.push_back(user_info[uid]+"님이 나갔습니다.");
        }
    }
    
    return answer;
}