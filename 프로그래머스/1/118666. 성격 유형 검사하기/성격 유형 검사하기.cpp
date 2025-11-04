#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> score = {
    {'R', 0}, {'T', 0},
    {'C', 0}, {'F', 0},
    {'J', 0}, {'M', 0},
    {'A', 0}, {'N', 0},
};

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int n = survey.size();
    
    for(int i = 0; i < n; i++){
        if(survey[i] == "AN"){
            if(choices[i] >= 4) score['N'] += (choices[i] - 4);
            else score['A'] += (4 - choices[i]);
        }
        else if(survey[i] == "NA"){
            if(choices[i] >= 4) score['A'] += (choices[i] - 4);
            else score['N'] += (4 - choices[i]);
        }
        else if(survey[i] == "CF"){
            if(choices[i] >= 4) score['F'] += (choices[i] - 4);
            else score['C'] += (4 - choices[i]);
        }
        else if(survey[i] == "FC"){
            if(choices[i] >= 4) score['C'] += (choices[i] - 4);
            else score['F'] += (4 - choices[i]);
        }
        else if(survey[i] == "RT"){
            if(choices[i] >= 4) score['T'] += (choices[i] - 4);
            else score['R'] += (4 - choices[i]);
        }
        else if(survey[i] == "TR"){
            if(choices[i] >= 4) score['R'] += (choices[i] - 4);
            else score['T'] += (4 - choices[i]);
        }
        else if(survey[i] == "JM"){
            if(choices[i] >= 4) score['M'] += (choices[i] - 4);
            else score['J'] += (4 - choices[i]);
        }
        else{ // MJ
            if(choices[i] >= 4) score['J'] += (choices[i] - 4);
            else score['M'] += (4 - choices[i]);
        }
    }
    
    if(score['R'] >= score['T']) answer += "R";
    else answer += "T";
    
    if(score['C'] >= score['F']) answer += "C";
    else answer += "F";

    if(score['J'] >= score['M']) answer += "J";
    else answer += "M";
    
    if(score['A'] >= score['N']) answer += "A";
    else answer += "N";
    
    return answer;
}