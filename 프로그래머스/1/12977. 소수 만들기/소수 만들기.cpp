#include <vector>
#include <iostream>
using namespace std;
int decimal(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 1;
    }
    return 0;
}

int solution(vector<int> nums) {
    int answer = 0;
    
    for (int i=0;i<nums.size()-2;i++){
        for (int j=i+1;j<nums.size()-1;j++){
            for (int k=j+1;k<nums.size();k++){
                int tmp = nums[i]+nums[j]+nums[k];
                if (decimal(tmp)==0){
                    answer++;
                }
            }
        }
    }

    return answer;
}