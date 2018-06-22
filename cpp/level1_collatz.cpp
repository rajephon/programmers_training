//
//  level1_collatz.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>
using namespace std;

int solution(int num) {
    int count = 0;
    long long val = num;
    while(val != 1) {
        count++;
        val = (val % 2 == 0)? val / 2 : val * 3 + 1;
        if (count > 500)
            return -1;
    }
    return count;
}