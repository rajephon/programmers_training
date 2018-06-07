//
//  level1_find_longest_palindromic_substring.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 07..
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

void sol(const std::string &q, int e) {
    std::cout << "결과: " << solution(q) << ", 기대값 : " << e << std::endl;
}

int main(int argc, const char * argv[]) {
    sol("dccaccd", 7);
    sol("HYTBCABADEFGHABCDEDCBAGHTFYW1234567887654321ZWETYGDE", 16);
    sol("abcdcba", 7);
    sol("abacde", 3);
    sol("cbbd", 2);
    sol("babad", 3);
    sol("1234", 1);
    return 0;
}