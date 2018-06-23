//
//  level2_next_big_number.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>
#include <bitset>
using namespace std;

int getBinCount(int n) {
    std::string s = std::bitset< 32 >( n ).to_string();
    int i = 0;
    for (auto idx : s) {
        if (idx == '1')
            i++;
    }
    return i;
}

int solution(int n) {
    int answer= 0;
    int count_num = getBinCount(n);
    answer = n+1;
    while(getBinCount(answer) != count_num) {
        answer++;
    }
    return answer;
}