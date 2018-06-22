//
//  level1_star_square.cpp
//  programmers_training
//
//  Created by Chanwoo Noh on 2018. 06. 21..
//  Copyright © 2018년 Chanwoo Noh. All rights reserved.
//
#include <stdio.h>

int main(void) {
    int n;
    int m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}