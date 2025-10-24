#include <string>
#include <vector>
#include <numeric>

using namespace std;

//리스트 길이 11이상이면 모든 원소의 합
// 10이하면 모든 원소의 곱
int solution(vector<int> num_list) {
    if(num_list.size()>=11){
        return accumulate(num_list.begin(), num_list.end(), 0);
    }else{
        return accumulate(num_list.begin(), num_list.end(), 1, multiplies<int>());
    }
}