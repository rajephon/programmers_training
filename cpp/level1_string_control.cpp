//
//  level1_string_control.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
using namespace std;

bool solution(string s) {
    return (s.size() == 4 || s.size() == 6) && s.find_first_not_of("0123456789") == std::string::npos;
}