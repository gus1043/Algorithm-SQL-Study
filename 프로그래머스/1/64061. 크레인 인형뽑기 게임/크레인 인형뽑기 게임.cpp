#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> basket;
    int N = board.size();
    
    for (int col : moves){
        int col_0 = col-1; 
        
        for(int row=0;row<N;++row){
            int doll_type = board[row][col_0];
            
            if(doll_type !=0){
                board[row][col_0] = 0;
            
            
                if(!basket.empty()&&basket.top()==doll_type){
                    basket.pop();
                    answer+=2;
                }else{
                    basket.push(doll_type);
                }
                break;
            }
        }
    }
    
    return answer;
}