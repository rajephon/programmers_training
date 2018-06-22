//
//  level1_number_average.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <vector>
using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    for (const auto& v : arr)
        answer += v;
    answer /= arr.size();
    return answer;
}