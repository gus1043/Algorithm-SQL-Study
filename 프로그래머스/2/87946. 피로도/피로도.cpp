#include <string>
#include <vector>

using namespace std;

int maxDepth = 0;
bool visited[8]={
    false,
};

void exploreDungeon(int depth, int power, vector<vector<int>> &dungeons){
    if (maxDepth<depth) maxDepth = depth;
    
    for(int i=0;i<dungeons.size();i++){
        if(visited[i] || dungeons[i][0] > power){
            continue;
        }
        
        visited[i] = true;
        exploreDungeon(depth+1, power-dungeons[i][1], dungeons);
        visited[i]=false;
    }
}
//최소 필요 피로도, 소모 피로도
int solution(int k, vector<vector<int>> dungeons) {
    
    exploreDungeon(0, k, dungeons);
    return maxDepth;
}