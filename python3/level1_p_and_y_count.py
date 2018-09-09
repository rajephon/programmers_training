#
#  level1_p_and_y_count.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 09. 09..
#  Copyright (c) 2018 Chanwoo Noh. All rights reserved.
#

def solution(s):
    stack = 0
    for item in s :
        if item == 'p' or item == 'P':
            stack += 1
        elif item == 'Y' or item == 'y':
            stack -= 1
    return stack == 0

# ... or more simply
# def solution(s):
    # return s.lower().count('p') == s.lower().count('y')