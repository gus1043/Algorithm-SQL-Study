#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    // if (a > b){
    //     swap(a,b);
    // }
    
    while (a != b){
        answer ++;
        a = ceil((a+1)/2);
        b = ceil((b+1)/2);
    }

    return answer;
}