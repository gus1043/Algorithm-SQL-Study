#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    //x와 x가 아닌 다른 글자들이 나온 횟수를 각각 셉니다
    //처음으로 두 횟수가 같아지는 순간 멈추고, 지금까지 읽은 문자열을 분리
    //s에서 분리한 문자열을 빼고 남은 부분에 대해서 이 과정을 반복합니다. 남은 부분이 없다면 종료
    //만약 두 횟수가 다른 상태에서 더 이상 읽을 글자가 없다면, 역시 지금까지 읽은 문자열을 분리하고, 종료
    int x = 0;
    int notx = 0;
    char init='\0';
    
    for(char c: s){
        if(init=='\0'){
            init=c;
            x=1;
            continue;
        }    
        
        if(c==init) x++;
        else notx++;
        
        if(x==notx){
            answer++;
            init='\0';
            x=0;
            notx=0;
        }
        
    }
    
    if(x>0 || notx>0){
        answer++;
    }
    
    return answer;
}