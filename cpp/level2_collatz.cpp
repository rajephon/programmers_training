//
//  level2_collatz.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
using namespace std;

int collatz(int num) {
    int answer = 0;
    int count = 0;
    int input = num;
    for (count = 1; count <= 500; count++) {
        if (input == 1) return count-1;
        input = (input % 2 == 0) ? (input / 2) : (input * 3 + 1);
    }
    return -1;
}

int main() {
    int testCase = 6;
    int testAnswer = collatz(testCase);
    
    cout<<testAnswer;
}
