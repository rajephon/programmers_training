//
//  level3_integer_triangle.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2019. 01. 02..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = triangle[0][0];
    if (triangle.size() == 1)
        return answer;
    
    for (int i = 1; i < triangle.size(); i++) {
        for (int j = 0; j <= i; j++) {
            if (j==0)
                triangle[i][0] += triangle[i-1][0];
            else if (j == triangle[i].size()-1)
                triangle[i][j] += triangle[i-1][j-1];
            else {
                if (triangle[i-1][j] > triangle[i-1][j-1])
                    triangle[i][j] += triangle[i-1][j];
                else
                    triangle[i][j] += triangle[i-1][j-1];
            }
        }
    }
    for (int i = 0, row = triangle.size()-1; i < triangle.size(); i++) {
        if (answer < triangle[row][i])
            answer = triangle[row][i];
    }
    return answer;
}