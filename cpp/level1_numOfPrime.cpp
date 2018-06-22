//
//  level2_numOfPrime.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    std::vector<bool> primeMat;
    primeMat.resize(n);
    std::fill(primeMat.begin(), primeMat.end(), true);
    for (int i = 2; i <= n; i++) {
        if (!primeMat.at(i-1)) {
            continue;
        }else {
            answer++;
            for (int j=1; i*j <= n; j++) {
                primeMat.at((i*j)-1) = false;
            }
        }
    }
    return answer;
}