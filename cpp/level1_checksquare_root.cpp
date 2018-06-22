//
//  level1_checksquare_root.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <math.h>
using namespace std;

long long solution(long long n) {
    auto root = sqrt(n);
    long long answer = (long long)root;
    if ((root - answer) > 0)
        return -1;
    answer++;
    return answer * answer;
}