#include<vector>
#include<queue>
#include<string>

using namespace std;

const int MAX_SIZE = 100;
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int check[MAX_SIZE][MAX_SIZE];

struct Point{
    int y,x;
    
    Point(int y, int x) : y(y), x(x){}
    
    bool isValid(int width, int height) const {
    return 0<=y && y<height && 0<=x &x<width;
    }
    
    Point move(int i) const {return Point(y+dy[i], x+dx[i]);}
    
    bool canMoveTo(const vector<vector<int>> &maps) const{
        return maps[y][x]==1 && check[y][x]==0;
    }
};

queue<Point> q;

//처음에 캐릭터는 게임 맵의 좌측 상단인 (1, 1) 
//우측 하단인 (n, m) 위치에 있습니다.

int bfs(char start, char end, vector<string> &maps){
    bool visited [101][101] = {false};
    
    q.push({1,1});
    
    
}

int solution(vector<vector<int>> maps)
{
    int width = maps[0].size(), height=maps.size();
    q.push({0,0});
    check[0][0]=1;
    
    //너비 우선 탐색
    while (!q.empty()){
        Point current = q.front();
        q.pop();
        
        for(int i=0;i<4;i++){
            Point next = current.move(i);
            if(next.isValid(width, height)&&next.canMoveTo(maps)){
                check[next.y][next.x] = check[current.y][current.x]+1;
                q.push({next.y, next.x});
            }
        }
    }
    
    
    //목적지 도달 가능 여부 확인 
    int destinationX = width-1, destinationY=height-1;
    if(check[destinationY][destinationX]==0){
        return -1;
    }
    
    return check[destinationY][destinationX];
    
}