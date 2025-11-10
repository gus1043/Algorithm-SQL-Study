#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";
    sort(indices.begin(), indices.end());
    int k=0;
    
    for(int i=0;i<my_string.length();++i){
        if(indices[k]==i){
            k++;
        }else{
            answer+=my_string[i];
        }
    }
    return answer;
}