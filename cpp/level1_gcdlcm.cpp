//
//  level1_gcdlcm.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> gcdlcm(int a,int b) {
    vector<int> answer;
    if (a < b) {
        std::swap(a, b);
    }
    int fixed_a = a, fixed_b = b;
    
    while (true) {
        int result = fixed_a % fixed_b;
        if (result == 0) {
            break;
        }
        fixed_a = fixed_b;
        fixed_b = result;
    }
    
    answer.push_back(fixed_b);
    answer.push_back(a*b/fixed_b);
    
    return answer;
}

int main() {
    int a=3, b=12;
    vector<int> testAnswer = gcdlcm(a,b);
    
    cout<<testAnswer[0]<<" "<<testAnswer[1];
}
