#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int calculateTotalDays(string date) {
    int year = stoi(date.substr(0, 4));
    int month = stoi(date.substr(5, 2));
    int day = stoi(date.substr(8, 2));
    // 기준점을 0000.01.01로 잡고 계산 (모든 달 28일 기준)
    return (year * 12 * 28) + ((month - 1) * 28) + (day);
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    unordered_map<char, int> terms_map; 

    for (string s : terms) {
        terms_map[s[0]] = stoi(s.substr(2));
    }

    int today_days = calculateTotalDays(today);

    for (int i = 0; i < privacies.size(); ++i) {
        string privacy_date_str = privacies[i].substr(0, 10);
        char type = privacies[i][11];
        int months = terms_map[type];

        int privacy_days = calculateTotalDays(privacy_date_str);

        int expiry_days = privacy_days + (months * 28);

        if (expiry_days <= today_days) {
            answer.push_back(i + 1);
        }
    }

    return answer;
}
