//
//  level1_fibonacci.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
using namespace std;

int solution(int n) {
    std::vector<unsigned long long> f;
    f.resize(n+1);
    f.at(0) = 0;
    f.at(1) = 1;
    for (int i = 2; i <= n; i++) {
        f.at(i) = (f.at(i-1) + f.at(i-2)) % 1234567;
    }
    return f.at(n);
}
