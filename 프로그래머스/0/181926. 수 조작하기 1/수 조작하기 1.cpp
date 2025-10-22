#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    for (char c: control){
        if(c=='w') answer++;
        else if (c=='s') answer--;
        else if (c=='d') answer+=10;
        else if(c=='a') answer-=10;
    }
    return answer;
}