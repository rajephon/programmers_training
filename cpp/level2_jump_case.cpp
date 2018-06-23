//
//  level2_jump_case.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
using namespace std;

long long solution(int n) {
    std::vector<long long> dp = {1, 2};
    for (int i = 2; i < n; i++) {
        dp.push_back((dp[i-1] + dp[i-2]) % 1234567);
    }
    return dp[n-1];
}