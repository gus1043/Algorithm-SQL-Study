#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

//N:아파트의 개수, stations:4g 설치 위치, w:전파 도달 거리
int solution(int n, vector<int> stations, int w) {
    int answer = 0; 
    int apt_index = 1;
    int station_index = 0; 
    int range = (2 * w) + 1; 

    while (apt_index <= n) {
        if (station_index < stations.size() && apt_index >= stations[station_index] - w) {
            apt_index = stations[station_index] + w + 1;
            station_index++;
        }
        else {
            answer++;
            apt_index += range;
        }
    }

    return answer;
}