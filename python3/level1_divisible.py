#
#  level1_divisible.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 09. 08..
#  Copyright © 2018년 Chanwoo Noh. All rights reserved.
#

def solution(arr, divisor):
    answer = []
    for item in arr :
        if item % divisor == 0 :
            answer.append(item)
    if len(answer) == 0 :
        return [ -1 ]
    answer.sort()
    return answer