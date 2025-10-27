#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    string str_answer="";
    vector <string> numbers = {"zero", "one", "two", "three", "four", "five", "six","seven", "eight", "nine"};
    string tmp="";
    for (char c:s){
        if(!isdigit(c)){
            tmp+=c;   
        }else{ //digit이면
            str_answer+=c;
        }
        
        if(tmp.length()>0 && find(numbers.begin(), numbers.end(), tmp)!=numbers.end()){
            int find_idx = find(numbers.begin(), numbers.end(), tmp)-numbers.begin();
            str_answer+=to_string(find_idx);
            // cout<<find_idx<<endl;
            // cout<<"찾는값"<<numbers[find_idx]<<endl;
            // cout<<answer<<endl;
            tmp = "";
            
        }
        
    }
    answer = stoi(str_answer);
    return answer;
}