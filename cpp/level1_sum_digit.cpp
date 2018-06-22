//
//  level1_sum_digit.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    while (n >= 10) {
        answer += n % 10;
        n /= 10;
    };
    answer += n % 10;
    return answer;
}