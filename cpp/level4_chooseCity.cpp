//
//  level4_bestSet.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int chooseCity(int n, vector<pair<int, int>> city) {
    int answer = 0;
    std::sort(city.begin(), city.end());
    size_t maxCitizen = 0;
    for (size_t i = 0; i < n; i++) {
        maxCitizen += city.at(i).second;
    }
    
    for (size_t i = 0, sumCitizen = 0, lim = maxCitizen * 0.5f; i < n; i++) {
        sumCitizen += city.at(i).second;
        if (sumCitizen >= lim) {
            answer = city.at(i).first;
            break;
        }
        
    }
    return answer;
}

int main() {
    int tn = 3;
    pair<int, int> a, b, c;
    a.first = 1, a.second = 5;
    b.first = 2, b.second = 2;
    c.first = 3, c.second = 3;
    vector<pair<int, int>> tcity { a,b,c };
    
    //아래는 테스트 출력을 위한 코드입니다.
    cout << chooseCity(tn, tcity);
}
