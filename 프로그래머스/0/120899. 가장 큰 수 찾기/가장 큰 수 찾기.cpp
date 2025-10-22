#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int max = *max_element(array.begin(), array.end());
    int idx = find(array.begin(), array.end(), max)-array.begin();
    answer = {max, idx};
    return answer;
}