//
//  level1_2016.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2017. 10. 22..
//  Copyright © 2017년 Chanwoo Noh. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string solution(int a, int b) {
	const string answer[] = { "FRI","SAT","SUN","MON","TUE","WED","THU" };
	const int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int diff_day = b-1;
	for (int i = 1; i < a; i++) {
		diff_day += month[i - 1];
	}
	return answer[diff_day%7];
}