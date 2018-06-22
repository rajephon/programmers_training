//
//  level1_custom_sort.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 20..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer = strings;
    std::sort(answer.begin(), answer.end(), [n](std::string a, std::string b){
        if (a.at(n) == b.at(n)) {
            return a.compare(b) < 0;
        }else {
            return (a.at(n) < b.at(n));
        }
    });
    return answer;
}