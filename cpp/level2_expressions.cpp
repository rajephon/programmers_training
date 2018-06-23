//
//  level2_expressions.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    int sum = 0;
    std::vector<int> stack;
    for (int i = 1; i < n; i++) {
        stack.push_back(i);
        sum += i;
        while (sum > n) {
            sum -= stack.front();
            stack.erase(stack.begin());
        }
        if (sum == n) {
            answer++;
        }
    }
    return answer + 1;
}