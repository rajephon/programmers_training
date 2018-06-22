//
//  level1_number_reverse.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while (n > 0) {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}