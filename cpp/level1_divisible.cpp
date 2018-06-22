//
//  level1_divisible.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (const auto &v : arr) {
        if (v % divisor == 0)
            answer.push_back(v);
    }
    if (answer.size() > 0)
        std::sort(answer.begin(), answer.end());
    else
        answer.push_back(-1);
    
    return answer;
}