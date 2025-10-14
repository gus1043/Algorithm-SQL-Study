#include <vector>
#include <map>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    // 가질 수 있는 폰켓몬의 수 
    int count = nums.size()/2;
    
    map<int, int> mon;
    
    for (int i=0; i<nums.size();i++){
        if( mon.find(nums[i])==mon.end()){
            mon[nums[i]]=1;
        }else{
            mon[nums[i]]+=1;
        }
    }
    
    int type = mon.size();
    
    if(type>= count){
        answer = count;
    }else{
        answer = type;
    }
    return answer;
}