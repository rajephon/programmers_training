#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> productMatrix(vector<vector<int> >A, vector<vector<int>> B) {
    vector<vector<int>> answer;
    for (int i = 0; i < A.size(); i++) {
        vector<int> row;
        for (int j = 0; j < B.at(i).size(); j++) {
            int result = 0;
            for (int k = 0; k < A.at(i).size(); k++) {
                result += A.at(i).at(k) * B.at(k).at(j);
            }
            row.push_back(result);
        }
        answer.push_back(row);
    }
    return answer;
}

int main() {
    vector<vector<int>> A{{1,2},{2,3}};
    vector<vector<int>> B{{2,3},{3,4}};
    vector<vector<int>> testAnswer = productMatrix(A,B);
    
    for(int i=0;i<testAnswer.size(); i++) {
        for(int j=0;j<testAnswer[i].size(); j++)
            cout<<testAnswer[i][j]<<" ";
        cout<<"\n";
    }
}
