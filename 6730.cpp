#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    int T;
    scanf("%d", &T);
 
    for(int t=1; t<=T; t++) {
        int N;
        scanf("%d", &N);
 
        vector<int> v;
        int tmp;
        for (int i=0; i<N; i++) {
            scanf("%d", &tmp);
            v.push_back(tmp);
        }
 
        int up_h = 0, down_h = 0;
 
        for (int i=0; i<v.size()-1; i++) {
            if (v[i] < v[i+1]) {
                up_h = max(up_h, v[i+1] - v[i]);
            }
            else if (v[i] >= v[i+1]) {
                down_h = max(down_h, v[i] - v[i+1]);
            }
        }
 
        printf("#%d %d %d\n", t, up_h, down_h);
    }
 
    return 0;
}