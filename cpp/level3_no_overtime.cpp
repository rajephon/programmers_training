//
//  level2_no_overtime.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
#include <queue>
using namespace std;

long long solution(int n, vector<int> works) {
    std::priority_queue<int> q;
    for (const auto &v : works)
        q.push(v);
    for (int i = 0; i < n; i++) {
        if (q.top() > 0) {
            int tmp = q.top();
            q.pop();
            q.push(tmp-1);
        }
    }
    long long answer = 0;
    while(!q.empty()) {
        answer += (long long)q.top() * (long long)q.top();
        q.pop();
    }
    return answer;
}