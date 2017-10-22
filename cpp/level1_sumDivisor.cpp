//
//  level1_sumDivisor.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include<iostream>
using namespace std;

int sumDivisor(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n%i == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int testCase = 10;
    int testAnswer = sumDivisor(testCase);
    
    cout<<testAnswer;
}
