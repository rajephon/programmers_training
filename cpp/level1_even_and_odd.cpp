//
//  level1_even_and_odd.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
using namespace std;

string solution(int num) {
    return num % 2 == 0 ? "Even" : "Odd";
}