//
//  level1_find_kim.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
using namespace std;

string solution(vector<string> seoul) {
    int i = 0;
    for (; i < seoul.size(); i++) {
        if (seoul.at(i) == "Kim")
            break;
    }
    return std::string("김서방은 ").append(to_string(i)).append("에 있다");
}