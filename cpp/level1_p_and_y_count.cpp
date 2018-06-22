//
//  level1_p_and_y_count.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

bool solution(string s) {
    int stack = 0;
    for (const auto &v : s) {
        if (v == 'p' || v == 'P')
            stack++;
        else if (v == 'y' || v == 'Y')
            stack--;
    }
    return stack == 0;
}