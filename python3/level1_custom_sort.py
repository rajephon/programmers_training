#
#  level1_custom_sort.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 09. 09..
#  Copyright (c) 2018 Chanwoo Noh. All rights reserved.
#

def solution(strings, n):
    class Comp(object):
        def __init__(self, value):
            self.value = value
        def __lt__(self, other):
            if self.value[n] == other.value[n]:
                return self.value < other.value
            return self.value[n] < other.value[n]
    answer = sorted(strings, key=Comp)
    return answer