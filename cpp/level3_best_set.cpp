//
//  level3_best_set.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
#include <math.h>
using namespace std;

vector<int> solution(int n, int s) {
    if (n > s)
        return { -1 };
    vector<int> answer;
    int b = floor((double)s/(double)n);
    int diff = s - (n * b);
    for (int i = 0; i < n; i++) {
        answer.push_back(b);
    }
    if (diff < 0) {
        for (int i = 0; i < diff; i++) {
            --answer[i];
        }
    }else if (diff > 0) {
        for (int i = 0; i < diff; i++) {
            ++answer[answer.size()-1-i];
        }
    }
    return answer;
}