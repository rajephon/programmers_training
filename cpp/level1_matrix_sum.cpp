//
//  level1_matrix_sum.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    answer.resize(arr1.size());
    for (int i = 0; i < arr1.size(); ++i) {
        answer[i].resize(arr1[i].size());
        for (int j = 0; j < answer[i].size(); ++j)
            answer[i][j] = arr1[i][j] + arr2[i][j];
    }
    return answer;
}