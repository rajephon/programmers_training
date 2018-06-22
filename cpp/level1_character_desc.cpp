//
//  level1_character_desc.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

string solution(string s) {
    std::sort(s.begin(), s.end(), std::greater<char>());
    return s;
}