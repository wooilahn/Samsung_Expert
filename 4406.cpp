#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
int main() {
    int T;
    scanf("%d", &T);
 
    for (int t = 1;t <= T;t++) {
        char str[53] = { 0 };
        scanf("%s", str);
 
        printf("#%d ", t);
        for (int i = 0;i < strlen(str); i++) {
            if (str[i] != 'a' && str[i] != 'e' &&
                str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
                printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}