//
//  level3_nlcm.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

long long eu(long long x, long long y) {
    long long n;
    while (true) {
        n = x % y;
        if (n == 0)
            return y;
        x = y;
        y = n;
    }
}

long long nlcm(vector<int> num) {
    long long lcm = num.at(0);
    for (int i = 0, max=num.size(); i < max; i++) {
        lcm = lcm * num.at(i) / eu(lcm, num.at(i));
    }
    return lcm;
}

int main() {
    vector<int> test{2,6,8,14};
    
    // 아래는 테스트로 출력해 보기 위한 코드입니다.
    cout << nlcm(test);
}

