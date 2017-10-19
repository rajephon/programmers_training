#include <iostream>
#include <bitset>
using namespace std;

int getBinCount(int n) {
    std::string s = std::bitset< 32 >( n ).to_string();
    int i = 0;
    for (auto idx : s) {
        if (idx == '1')
            i++;
    }
    return i;
}

int nextBigNumber(int n) {
    int answer= 0;
    int count_num = getBinCount(n);
    answer = n+1;
    while(getBinCount(answer) != count_num) {
        answer++;
    }
    return answer;
}

int main() {
    int n=78;
    
    //아래는 테스트 출력을 위한 코드입니다.
    cout<<nextBigNumber(n);
}

