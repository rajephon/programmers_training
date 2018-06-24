//
//  level3_longest_palindrome.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 24..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int solution(string s) {
    int answer=1;
    if (s.length() <= 1) {
        return (int)s.length();
    }
    for (int i = 0; i < s.length(); i++) {
        bool e1 = true;
        bool e2 = true;
        for (int j = i-1; j >= 0; j--) {
            int t1 = i + i - j;
            int t2 = t1 - 1;
            if ((t1 > s.length() - 1) || (s.at(j) != s.at(t1)))
                e1 = false;
            if ((t2 > s.length() - 1) || (s.at(j) != s.at(t2)))
                e2 = false;
            
            if (!e1 && !e2)
                break;
            
            int l1 = t1 - j + 1;
            int l2 = t2 - j + 1;
            if (e1 && l1 > answer) {
                answer = l1;
            }
            if (e2 && l2 > answer) {
                answer = l2;
            }
        }
    }

    return answer;
}