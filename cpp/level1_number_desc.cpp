//
//  level1_number_desc.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    std::vector<int> s;
    while (n > 0) {
        s.push_back(n%10);
        n /= 10;
    }
    std::sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        answer += s.at(i) * (pow(10, i));
    }
    return answer;
}