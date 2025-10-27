#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset> // bitset 라이브러리 사용

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for (int i = 0; i < n; ++i) {
        // C++의 비트 연산자 | (OR)를 사용하여 두 수를 합칩니다.
        // 예를 들어 9(1001) | 30(11110) = 31(11111) 입니다.
        int combined = arr1[i] | arr2[i];
        
        // C++11부터 사용 가능한 bitset을 이용하여 2진수 문자열로 변환합니다.
        string binary_str = bitset<32>(combined).to_string();
        
        // 불필요한 앞부분의 0을 제거하고, 필요한 길이 n만큼 자릅니다.
        // 예를 들어 n=5일 때, "00...0011111" -> "11111"로 변환
        binary_str = binary_str.substr(32 - n);
        
        // 2진수 문자열을 '#'과 ' '으로 변환합니다.
        string result_row = "";
        for (char c : binary_str) {
            if (c == '1') {
                result_row += '#';
            } else {
                result_row += ' ';
            }
        }
        answer.push_back(result_row);
    }
    
    return answer;
}
