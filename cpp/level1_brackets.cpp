//
//  level1_brackets.cpp
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
    for (const auto &c : s) {
        if (c == '(')
            stack++;
        else if (c == ')')
            stack--;
        if (stack < 0)
            return false;
    }
    return stack == 0;
}