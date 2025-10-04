#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    set<int> sum; //합 저장할 배열
    int len= elements.size();
    
    //원형 수열 처리
    elements.insert(elements.end(), elements.begin(), elements.end());
    
    //길이만큼 반복을 먼저해
    for (int i = 0; i < len; i++) {
        //i부터 j까지 더하기
        for (int j = 0; j < len; j++) {
            sum.insert(accumulate(elements.begin() + i, elements.begin() + i + j, 0));
        }
    }
    
    return sum.size();
}