#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int findLargestSquare(vector<vector<char>> board) {
    int answer = 0;
    vector<vector<int>> mat;
    mat.resize(board.size());
    for (int i = 0, maxi = (int)board.size(); i < maxi; i++) {
        mat.at(i).resize(board.at(i).size());
        for (int j = 0, maxj = (int)board.at(i).size(); j < maxj; j++) {
            int value = board.at(i).at(j);
            int n = 0;
            if (value != 'X') {
                n = 1;
                int x = (j!=0)? mat.at(i).at(j-1) : 0;
                int y = (i!=0)? mat.at(i-1).at(j) : 0;
                int z = (i!=0&&j!=0)? mat.at(i-1).at(j-1) : 0;
                n = std::min(x, std::min(y, z)) + 1;
            }
            mat.at(i).at(j) = n;
            if (answer < n) {
                answer = n;
            }
        }
    }
    return answer*answer;
}

int main() {
    
    vector<vector<char>> board{
        {'X','O','O','O','X'},
        {'X','O','O','O','O'},
        {'X','X','O','O','O'},
        {'X','X','O','O','O'},
        {'X','X','X','X','X'}};
    
    //아래는 테스트 출력을 위한 코드입니다.
    cout<<findLargestSquare(board);
}

