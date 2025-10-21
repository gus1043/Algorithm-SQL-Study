#include <string>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    //전체의 합
    int total = accumulate(num_list.begin(), num_list.end(), 0);
    
    int qwe = accumulate(num_list.begin(), num_list.end(), 1, multiplies<int>());
    
    if(qwe < pow(total,2)) return 1;
    else return 0;
    return answer;
}