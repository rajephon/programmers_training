//
//  level1_jaden_case.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <ctype.h>
using namespace std;

string solution(string s) {
    s.at(0) = toupper(s.at(0));
    for (int i = 1; i < s.length(); i++)
        s.at(i) = (s.at(i - 1) == ' ') ? toupper(s.at(i)) : tolower(s.at(i));
    return s;
}