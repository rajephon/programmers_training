//
//  level2_caesar.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>
using namespace std;

string solution(string s, int n) {
    for (auto &v : s) {
        if (v == ' ')
            continue;
        char b = isupper(v)?'A':'a';
        v = b+(v-b+n)%26;
    }
    return s;
}