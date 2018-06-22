//
//  level1_distance_array.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer = { x };
    for (int i = 1; i < n; i++)
        answer.push_back(answer.back() + x);
    return answer;
}