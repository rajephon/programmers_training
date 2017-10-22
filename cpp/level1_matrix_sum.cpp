//
//  level1_matrix_sum.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> sumMatrix(vector<vector<int>> A, vector<vector<int>> B) {
    vector<vector<int> > answer;
    answer.resize(A.size());
    for (int i = 0; i < A.size(); i++) {
        answer.at(i).resize(A.at(i).size());
        for (int j = 0; j < A.at(i).size(); j++) {
            answer.at(i).at(j) = A.at(i).at(j) + B.at(i).at(j);
        }
    }
    return answer;
}

int main() {
    vector<vector<int> > a{{1,2},{2,3}}, b{{3,4},{5,6}};
    vector<vector<int> > answer = sumMatrix(a,b);
    
    for(int i=0;i<answer.size();i++)
    {
        for(int j=0;j<answer[0].size();j++)
        {
            cout<<answer[i][j]<<" ";
        }
        cout<<"\n";
    }
}


