//
//  level3_best_album.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>
#include <unordered_map>
#include <queue>
#include <algorithm>
using namespace std;

struct musicPairComp {
    bool operator() (std::pair<int,int> a, std::pair<int,int> b) {
        if (a.second < b.second) {
            return true;
        }else if (a.second == b.second) {
            return a.first >= b.first;
        }
        return false;
    }
};

vector<int> solution(vector<string> genres, vector<int> plays) {
    std::unordered_map<string, int> gpc; // genresPlayCount
    std::unordered_map<string,
            std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, musicPairComp>> playLog;
    for (int i = 0, max = genres.size(); i < max; i++) {
        gpc[genres[i]] += plays[i];
        playLog[genres[i]].push({i, plays[i]});
    }
    std::vector<std::pair<std::string, int>> vgpc(gpc.begin(), gpc.end());
    std::sort(vgpc.begin(), vgpc.end(), [](const std::pair<string,int> &a, const std::pair<string,int> &b){ return a.second > b.second; });
    vector<int> answer;
    for (int i = 0, max = vgpc.size(); i < max; i++) {
        auto playList = playLog.find(vgpc[i].first)->second;
        for (int j = 0, listMax=(playList.size() < 2)? 1:2; j < listMax; j++) {
            answer.push_back(playList.top().first);
            playList.pop();
        }
    }
    return answer;
}