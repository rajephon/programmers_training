//
//  level2_nlcm.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
using namespace std;

int eu(int x, int y) {
    int n;
    while (true) {
        n = x % y;
        if (n == 0)
            return y;
        x = y;
        y = n;
    }
}

int solution(vector<int> arr) {
    int lcm = arr.at(0);
    for (int i = 0, max=(int)arr.size(); i < max; i++) {
        lcm = lcm * arr[i] / eu(lcm, arr[i]);
    }
    return lcm;
}