#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n) {
    std::vector<long long> f;
    f.resize(n+1);
    f.at(0) = ((long long)0);
    f.at(1) = ((long long)1);
    for (int i = 2; i <= n; i++) {
        f.at(i) = f.at(i-1) + f.at(i-2);
    }
    return f.at(n);
}

int main() {
    int testCase = 10;
    long long testAnswer = fibonacci(testCase);
    
    cout<<testAnswer;
}
