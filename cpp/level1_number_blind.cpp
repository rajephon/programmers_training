//
//  level1_harshad.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
using namespace std;

string solution(string phone_number) {
    for (int i = 0; i < phone_number.length() - 4; i++) {
        phone_number.at(i) = '*';
    }
    return phone_number;
}