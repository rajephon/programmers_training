#include <iostream>
using namespace std;
int jumpCase(int n) {
    return (n==1)?1:(n==2)?2:(jumpCase(n - 1) + jumpCase(n - 2));
}

int main() {
    int test = 4;
    
    //아래는 테스트로 출력해 보기 위한 코드입니다.
    cout << jumpCase(test);
}

