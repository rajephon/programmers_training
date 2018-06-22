//
//  level1_weird_string.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <string>
#include <vector>
using namespace std;

string solution(string s) {
    string answer = "";
    int cnt = 0;
    int diffCase = 32;
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == ' ') {
            cnt = 0;
            answer += " ";
            continue;
        }else {
            char c  = ' ';
            int div = cnt % 2;
            if ((div == 0) && (s.at(i) >= 'a' && s.at(i) <= 'z')) {
                c = ((char)(s.at(i) - diffCase));
            }else if ((div == 1) && (s.at(i) >= 'A' && s.at(i) <= 'Z') ) {
                c= ((char)(s.at(i) + diffCase));
            }else {
                c = s.at(i);
            }
            answer += c;
            cnt++;
        }
    }
    return answer;
}