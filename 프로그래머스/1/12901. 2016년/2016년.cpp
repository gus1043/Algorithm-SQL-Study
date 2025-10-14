#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector <string> weekdays = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    vector <int> days = {31, 29, 31, 30,31, 30,31,31, 30,31, 30,31};
    
    //전체 날짜 변화를 더하고 나머지 값으로 일자 구하기
    int total = b-1; //1일 하나 빼고 가기
    for (int i=0;i<a-1;i++){
        total+=days[i];
    }
    
    answer = weekdays[total%7];
    return answer;
}