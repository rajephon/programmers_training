#
#  level1_unique_number.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 09. 08..
#  Copyright © 2018년 Chanwoo Noh. All rights reserved.
#

def solution(s):
    result=[s[0]]
    for i in s:
        if result[-1]!=i:
            result.append(i)
    return result
