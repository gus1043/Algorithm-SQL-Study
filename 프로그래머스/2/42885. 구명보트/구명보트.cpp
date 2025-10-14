#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    //가벼운 대로 정렬
    sort(people.begin(), people.end());
    
    int left = 0;
    int right =  people.size()-1;
    
    while(left<=right){
        if(people[left]+people[right]<=limit){
            left++;
            
        }
        right--;
        answer+=1;
    }
    
    return answer;
}