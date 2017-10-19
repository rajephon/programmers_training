#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int noOvertime(int no,vector<int> works) {
    int answer = 0;
    for (int i = 0; i < no; i++) {
        std::sort(works.begin(), works.end(), std::greater<int>());
        works.front()--;
    }
    for (auto &work : works) {
        answer += std::pow(work, 2);
    }
    return answer;
}

int main() {
    vector<int> works{4,3,3};
    int testNo = 4;
    
    int testAnswer = noOvertime(testNo,works);
    
    cout<<testAnswer;
}
