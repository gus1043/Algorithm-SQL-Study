#include <string>
#include <vector>
#include <cmath>

using namespace std;

pair<int, int> key_pos[12] = { {3, 1}, {0, 0}, {0, 1}, {0, 2}, {1, 0}, {1, 1}, {1, 2}, {2, 0}, {2, 1}, {2, 2}, {3, 0}, {3, 2} };

// 두 키 사이의 맨해튼 거리를 계산하는 함수
int get_distance(int p1, int p2) {
    pair<int, int> pos1 = key_pos[p1];
    pair<int, int> pos2 = key_pos[p2];
    // abs 함수로 절대값 계산
    return abs(pos1.first - pos2.first) + abs(pos1.second - pos2.second);
}

string solution(vector<int> numbers, string hand) {
    string answer = "";
    //왼손 오른손 위치저장
    int left=10;
    int right=11; 
    
    for(int num : numbers){
        if(num==1 ||num==4 ||num==7 ){
            left = num;
            answer+="L";
        }
        if(num==3 ||num==6 ||num==9 ){
            right = num;
            answer+="R";
        } 
        if(num==2 ||num==5 ||num==8 || num==0 ){
            int diff1 = get_distance(left, num);
            int diff2= get_distance(right, num);
            if(diff1<diff2){
                left=num;
                answer+="L";
            }else if(diff2<diff1){
                right=num;
                answer+="R";
            }else{
                if(hand=="right") {
                    right=num;
                    answer+="R";}
                else {left =num; answer+="L";}
            }
        }
    }
    return answer;
}