//
//  level3_124.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 24..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <vector>
#include <string>
using namespace std;

string solution(int n) {
    string answer = "";
    std::vector<string> numbers = {"4", "1", "2"};
    while (n > 0) {
        int r = n % 3;
        n /= 3;
        answer = numbers[r] + answer;
        if (r == 0)
            n--;
    }
    return answer;
}