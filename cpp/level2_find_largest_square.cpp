//
//  level2_find_largest_square.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board) {
    int max = 0;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.at(i).size(); j++) {
            if (board[i][j] == 0)
                continue;
            int val = 1;
            if (i < board.size()-1 && j < board[i].size()-1 && board[i+1][j] > 0 && board[i+1][j+1] > 0 && board[i][j+1] > 0) {
                val = std::min(board[i][j], std::min(board[i+1][j], board[i][j+1])) + 1;
                board[i+1][j+1] = val;
            }
            if (val > max)
                max = val;
        }
    }
    return max * max;
}