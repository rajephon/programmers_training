//
//  level1_max_and_min.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <sstream>
#include <istream>
#include <iterator>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

string solution(string s) {
    std::stringstream ss(s);
    std::istream_iterator<std::string> begin(ss);
    std::istream_iterator<std::string> end;
    std::vector<std::string> vstrings(begin, end);
    int first = atoi(vstrings.at(0).c_str());
    int min = first, max = first;
    for (const auto &v : vstrings) {
        int val = atoi(v.c_str());
        if (val > max)
            max = val;
        if (val < min)
            min = val;
    }
    return to_string(min) + " " + to_string(max);
}