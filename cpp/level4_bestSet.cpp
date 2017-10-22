//
//  level4_bestSet.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include<vector>
#include<iostream>
using namespace std;

vector<int> bestSet(int no, int sum) {
    vector<int> answer;
    if (no > sum) {
        answer.push_back(-1);
        return answer;
    }
    answer.resize(no);
    int base = sum / no;
    std::fill(answer.begin(), answer.end(), base);
    int remain = sum % no;
    for (int i = 0, max = answer.size()-1; i < remain; i++) {
        answer.at(max - i) += 1;
    }
    
    
    return answer;
}

int main() {
    int n = 5, s = 7;
    vector<int> test = bestSet(n, s);
    
    // 아래는 테스트로 출력해 보기 위한 코드입니다.
    for (int i = 0; i<test.size(); i++)
        cout << test[i] << " ";
}
