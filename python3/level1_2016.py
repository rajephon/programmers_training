#
#  level1_2016.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 09. 08..
#  Copyright © 2018년 Chanwoo Noh. All rights reserved.
#

def solution(a, b):
    answer = ["FRI","SAT","SUN","MON","TUE","WED","THU"]
    month = [31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if a > 1:
        for i in range(0, a-1):
            b = b + month[i]
    return answer[b%7-1]
