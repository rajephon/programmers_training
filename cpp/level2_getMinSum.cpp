#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinSum(vector<int> A, vector<int> B) {
    int answer = 0;
    while (A.size() > 0) {
        std::vector<int>::iterator a_min = std::min_element(A.begin(), A.end());
        std::vector<int>::iterator b_max = std::max_element(B.begin(), B.end());
        answer += ((*a_min) * (*b_max));
        A.erase(a_min);
        B.erase(b_max);
    }
    return answer;
}

int main() {
    vector<int> tA{1,2}, tB{3,4};
    
    //아래는 테스트 출력을 위한 코드입니다.
    cout<<getMinSum(tA,tB);
}
