//
//  level1_middle_character.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    if (s.length() % 2 == 1)
        return std::string() + s.at((s.length()-1)/2);
    else
        return s.substr((int)s.length() / 2 - 1, 2);
}