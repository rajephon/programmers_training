#
#  level3_brst_album.py
#  programmers_training
#
#  Created by Chanwoo Noh on 2018. 10. 16..
#  Copyright © 2018년 Chanwoo Noh. All rights reserved.
#

def solution(genres, plays):
    d = {}
    for i in range(len(genres)):
        if not genres[i] in d:
            d[genres[i]] = {'t':0, 'l':[]} # {'i':[],'v':[]}
        d[genres[i]]['l'].append({'v':plays[i], 'i':i})
        d[genres[i]]['t'] += plays[i]
    d = list(d.values())
    d = sorted(d, key=lambda k: k['t'], reverse=True) 
    answer = []
    for i in range(len(d)):
        v = d[i]['l']
        v = sorted(v, key=lambda k: k['v'], reverse=True)
        for j in range(2 if len(v) >= 2 else len(v)):
            answer.append(v[j]['i'])
    return answer