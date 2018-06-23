//
//  level2_hopscotch.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> land) {
    vector<vector<int>> pointMap(land.size(), std::vector<int>(land[0].size()));
    for (int i = 0; i < land[0].size(); i++)
        pointMap[0][i] = land[0][i];
    for (int i = 0; i < land.size()-1; i++) {
        for (int j = 0; j < land[i].size(); j++) {
            for (int k = 0; k < land[i].size(); k++) {
                if (j == k)
                    continue;
                int c = pointMap[i][j] + land[i+1][k];
                if (c > pointMap[i+1][k])
                    pointMap[i+1][k] = c;
            }
        }
    }
    return *std::max_element(pointMap[pointMap.size()-1].begin(), pointMap[pointMap.size()-1].end());
}