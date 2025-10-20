#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer ={0,0}; //번호, 차레
    map <string, int> word_count;
    int count = 0;
    string temp;
    
    for(int i=0;i<words.size();i++){
        // 사람번호 : i+1%n
        
        int person = i%n+1;
        if (person==1){
            count++;
        }
        if (word_count.find(words[i])!=word_count.end()){
            //존재하면
            answer = {person, count};
            break;
        }else if(!temp.empty() && temp.back()!=words[i].front()){
            // 앞 글자 마지막이랑 다르면
            answer = {person, count};
            break;
        }else{
            word_count[words[i]] = 1;
        }
        temp = words[i];
    }
    

    return answer;
}