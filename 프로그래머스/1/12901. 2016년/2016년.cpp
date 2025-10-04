#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    //2016년 1월 1일은 금요일
    vector<string> weeks = {"FRI","SAT", "SUN", "MON","TUE","WED","THU"};
    vector<int> days = {31,29,31,30,31,30,31,31,30,31,30,31};
    
    int temp=b-1;
    
    //n월을 만들자
    for (int i=0;i<a-1;i++){
        temp+=days[i];
    }
    
    answer = weeks[temp%7];
    return answer;
}