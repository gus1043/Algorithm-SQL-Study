#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map <string, int> hash_set;
    
    for(int i=0;i<participant.size();i++){
        hash_set[participant[i]]++;
        
    }
    
    for(int i=0;i<completion.size();i++){
        hash_set[completion[i]]--;
        if(hash_set[completion[i]]==0){
            hash_set.erase(hash_set.find(completion[i]));
        }
    }
    
    return hash_set.begin()->first;
}