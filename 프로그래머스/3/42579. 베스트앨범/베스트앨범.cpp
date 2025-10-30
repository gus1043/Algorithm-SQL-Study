#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

bool compareGenre(const pair<string, int> &a, const pair<string, int> &b){
    return a.second > b.second;
}

bool compareSong(const pair<int, int> &a, const pair<int, int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

vector<int> solution(vector<string> genres, vector<int> plays) {
    vector<int> answer;
    unordered_map<string, vector<pair<int, int>>> geres_dict;
    unordered_map<string, int> play_dict;
    
    for(int i=0;i<genres.size();++i){
        geres_dict[genres[i]].push_back({i, plays[i]}); //key:classic -(링크드 리스트) {0,500},{2, 150},{3, 800}
        play_dict[genres[i]]+=plays[i];
    }
    
    vector<pair<string, int>> sorted_genres(play_dict.begin(), play_dict.end());
    sort(sorted_genres.begin(), sorted_genres.end(), compareGenre);
    
    for(auto &genre : sorted_genres){
        auto &songs = geres_dict[genre.first];
        sort(songs.begin(), songs.end(), compareSong);
        
        for (int i=0;i<min(2, (int)songs.size());++i){  //두개 씩 모으니까 min(2)로 해서 적으면 적은대로 많으면 2까지
            answer.push_back(songs[i].first);
        }
    }
    
    return answer;
}