#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream> 


using namespace std;

int solution(vector<int> citations) {
    vector <int> count;
    int answer =0;
    
    sort(citations.begin(), citations.end(),greater<int>());

    int h=0;
    
    for (int i=0;i<citations.size(); i++){
        // std::cout << citations[i] << " ";
        if (citations[i]>=i+1){
            h+=1;
        }else{
            break;
        }
    }
    return h;
}