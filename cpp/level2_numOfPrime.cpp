//
//  level2_numOfPrime.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
using namespace std;

int numOfPrime(int n) {
    int answer = 0;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            answer++;
    }
    return answer;
}

int main() {
    int testCase = 10;
    int testAnswer = numOfPrime(testCase);
    
    cout<<testAnswer;
}

