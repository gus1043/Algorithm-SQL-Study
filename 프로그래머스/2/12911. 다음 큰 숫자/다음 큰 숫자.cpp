#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int trans(int a){
    int temp=0;
    
    while(a!=0){
        if( a%2 == 1){
            temp++;
        }
        a=a/2;
    }
    
    return temp;
}

int solution(int n) {
    int answer = 0;
    
    int count1 = trans(n);
    
    for (int i=n+1;i<1000000;i++){
        if (trans(i) == count1){
            answer = i;
            break;
        }
    }
    return answer;
}