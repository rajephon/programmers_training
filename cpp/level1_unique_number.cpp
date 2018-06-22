//
//  level1_unique_number.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() <= 0)
        return answer;
    answer.push_back(arr.at(0));
    for (const auto &value : arr) {
        if (answer.back() != value) {
            answer.push_back(value);
        }
    }
    return answer;
}