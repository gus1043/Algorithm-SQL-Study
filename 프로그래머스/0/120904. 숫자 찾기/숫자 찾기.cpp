#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    string str_num = to_string(num);
    string str_k = to_string(k);
    
    int pos = str_num.find(str_k);
    if(pos == string::npos){
        return -1;
    } return pos+1;
}