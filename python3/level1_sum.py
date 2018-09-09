#
#  level1_sum.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 09. 09..
#  Copyright © 2018년 Chanwoo Noh. All rights reserved.
#

def solution(a, b):
    sum = 0
    if a > b :
        a,b=b,a
    while a <= b :
        sum += a
        a+=1
    return sum

# ... or more simply
# def solution(a, b):
#     answer = 0
#     if a > b:   (a,b) = (b,a)
#     return sum(range(a,b+1))