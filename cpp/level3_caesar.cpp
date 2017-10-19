#include<iostream>
#include<string>
using namespace std;

string caesar(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == ' ')
            answer += s.at(i);
        else {
            if (isupper(s.at(i))) {
                answer += 'A' + (s.at(i)-'A'+n)%26;
            }else if (islower(s.at(i))) {
                answer += 'a' + (s.at(i)-'a'+n)%26;
            }
        }
    }
    return answer;
}

int main() {
    string text = "a B z";
    int testNo = 4;
    
    string testAnswer = caesar(text, testNo);
    
    cout<<testAnswer;
}
