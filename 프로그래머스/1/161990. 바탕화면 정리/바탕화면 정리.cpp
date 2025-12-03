#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    //빈칸은 . 파일은 #
    //드래그 파일 선택, 선택 파일 삭제 가능
    //최소한의 이동거리 드래그 파일 한번에 지우기 
    // S(lux, luy)  E(rdx, rdy)
    //"드래그 한 거리"는 |rdx - lux| + |rdy - luy|
    
    vector<int> x;
    vector<int> y;
    //#은 어디에 있는지 위치 체크
    for(int i=0; i<wallpaper.size(); ++i){
        for (int j=0; j<wallpaper[0].length();++j){
            if(wallpaper[i][j] == '#'){
                x.push_back(i);
                y.push_back(j);
            }
        }
    }
    
    //x min max 랑 y min max만 찾으면 됨 
    int min_x = *min_element(x.begin(), x.end());
    int max_x = *max_element(x.begin(), x.end());
    int min_y = *min_element(y.begin(), y.end());
    int max_y = *max_element(y.begin(), y.end());
    
    answer.push_back(min_x);
    answer.push_back(min_y);
    answer.push_back(max_x+1);
    answer.push_back(max_y+1);
    return answer;
}