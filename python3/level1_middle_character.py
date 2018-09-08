#
#  level1_middle_character.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 09. 08..
#  Copyright © 2018년 Chanwoo Noh. All rights reserved.
#

def solution(s):
    slen = len(s)
    pos = slen // 2
    if slen % 2 == 0:
        return s[pos-1:pos+1]
    else:
        return s[pos]