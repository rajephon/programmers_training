//
//  level1_find_min.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int> arr) {
    if (arr.size() == 1) {
        return { -1 };
    }
    arr.erase(std::min_element(arr.begin(), arr.end()));
    return arr;
}