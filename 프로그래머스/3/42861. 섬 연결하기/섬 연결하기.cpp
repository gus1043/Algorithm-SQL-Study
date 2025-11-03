#include <string>
#include <vector>
#include <algorithm>

using namespace std;
// n 섬의 갯수
// costs 다리 건설 비용 [섬번호1, 섬번호2, 비용]
// costs의 길이 : ((n-1)*n)/2 
// 최소비용?

// 각 섬 사이의 다리를 거설하는 비용을 오름차순으로 정렬
// 비용이 작은 다리부터 선택해 섬을 연결
// n개의 섬을 연결하려면 n-1의 다리가 필요하므로 n-1개의 다리가 선택될때까지 과정반복

//상호배타적 집합
class DisjointSet
{
private: 
    vector<int> parent,rank;
    
public : 
    DisjointSet(int size) : parent(size, -1), rank(size,0){}
    
    int find(int node){
        if(parent[node]==-1) return node;
        
        return parent[node]=find(parent[node]);
    }
    
    void merge(int node1, int node2){
        int root1 = find(node1);
        int root2 = find(node2);

        if(root1 != root2){
            if(rank[root1]>rank[root2]){
                parent[root2] = root1;
            }else if(rank[root1]<rank[root2]){
                parent[root1]=root2;
            }else{
                parent[root2] = root1;
                rank[root1]++;
            }
        }
    }
    bool isCycle(int node1, int node2) {return find(node1) == find(node2);}
};
    
    
int solution(int n, vector<vector<int>> costs) {

    sort(costs.begin(), costs.end(),
        [](const vector<int> &a, const vector<int> &b) {return a[2]<b[2];});
    
    DisjointSet disjointset(n);
    
    int totalCost = 0;
    
    for(const auto &edge : costs){
        int cost = edge[2];
        int node1 = edge[0];
        int node2 = edge[1];
        
        if(!disjointset.isCycle(node1, node2)){
            disjointset.merge(node1, node2);
            totalCost+=cost;
        }
    }
    
    return totalCost;
}