//
//  level1_sum.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    if (a == b)
        return a;
    if (a > b)
        std::swap(a,b);
    while (a <= b)
        answer += a++;
    return answer;
}