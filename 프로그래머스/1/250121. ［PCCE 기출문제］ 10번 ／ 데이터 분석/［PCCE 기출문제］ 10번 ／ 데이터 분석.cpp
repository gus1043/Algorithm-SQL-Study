#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    //데이터 ["코드 번호(code)", "제조일(date)", "최대 수량(maximum)", "현재 수량(remain)"]
    //정렬한 데이터들이 담긴 이차원 정수 리스트 data
    //ext 값이 val_ext보다 작은 데이터만 
    //sort_by에 해당하는 값을 기준으로 오름차순으로 정렬
    
    if(ext == "code"){
        for(vector<int> k : data){
            if(k[0]<val_ext) answer.push_back(k);
        }
    }else if(ext == "date"){
         for(vector<int> k : data){
            if(k[1]<val_ext) answer.push_back(k);
        }
    }else if(ext == "maximum"){
         for(vector<int> k : data){
            if(k[2]<val_ext) answer.push_back(k);
        }
    }else{
         for(vector<int> k : data){
            if(k[3]<val_ext) answer.push_back(k);
        }
    }
    
    if(sort_by == "code"){
        sort(answer.begin(), answer.end(), [](const vector<int> &a, const vector<int> &b) {return a[0]<b[0];});
    }else if(sort_by == "date"){
        sort(answer.begin(), answer.end(), [](const vector<int> &a, const vector<int> &b) {return a[1]<b[1];});
    }else if(sort_by == "maximum"){
        sort(answer.begin(), answer.end(), [](const vector<int> &a, const vector<int> &b) {return a[2]<b[2];});
    }else{
        sort(answer.begin(), answer.end(), [](const vector<int> &a, const vector<int> &b) {return a[3]<b[3];});
    }
    
    
    
    
    return answer;
}