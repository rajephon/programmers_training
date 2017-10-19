#include <iostream>
using namespace std;

int numOfPrime(int n) {
    int answer = 0;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            if (i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            answer++;
    }
    return answer;
}

int main() {
    int testCase = 10;
    int testAnswer = numOfPrime(testCase);
    
    cout<<testAnswer;
}

