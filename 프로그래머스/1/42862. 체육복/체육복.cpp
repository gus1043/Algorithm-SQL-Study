#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    
    set<int> lost_set(lost.begin(), lost.end());
    set<int> reserve_set(reserve.begin(), reserve.end());
    
    //잃 but 갖
    vector<int> self;
    for (int i : lost){
        if(reserve_set.count(i)){
            self.push_back(i);
            lost_set.erase(i);
            reserve_set.erase(i);
        }
    }
    
    auto it = lost_set.begin();
    while(it!=lost_set.end()){
        int  student = *it;
        
        if(reserve_set.count(student-1)){
            reserve_set.erase(student-1);
            it = lost_set.erase(it);
            continue;
        }
        if(reserve_set.count(student+1)){
            reserve_set.erase(student+1);
            it = lost_set.erase(it);
            continue;
        }
        ++it;
    }
    
    int answer = n - lost_set.size();
    
    return answer;
}