#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    
    for(int c : num_list){
        while(c!=1){
            if(c%2==0){
                c=c/2;
                answer++;
            }else{
                c= (c-1)/2;
                answer++;
            }
        }
    }
    return answer;
}