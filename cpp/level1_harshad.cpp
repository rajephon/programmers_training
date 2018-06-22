//
//  level1_harshad.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <vector>
using namespace std;

bool solution(int x) {
    int val = x;
    int sum = 0;
    while(val > 0) {
        sum += val % 10;
        val /= 10;
    }
    return x % sum == 0;
}