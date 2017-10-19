#include <iostream>
#include <string>
using namespace std;

string getDayName(int a, int b) {
	const string answer[] = { "FRI","SAT","SUN","MON","TUE","WED","THU" };
	const int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int diff_day = b-1;
	for (int i = 1; i < a; i++) {
		diff_day += month[i - 1];
	}
	return answer[diff_day%7];
}

int main() {
	int a=5,b=24;

	//아래는 테스트 출력을 위한 코드입니다.
	cout<<getDayName(a,b);
}

