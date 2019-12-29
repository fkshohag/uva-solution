# include <iostream>
# include <cstdio>
#include<stdlib.h>
using namespace std;

int main() {
    freopen("in.txt", "r", stdin);
    int n, data[3001], d[3001];

    while(scanf("%d", &n) == 1) {
        for(int i = 0; i < n; i++) 
            scanf("%d", &data[i]);

        for(int i = 1; i < n; i++)
            d[i-1] = abs(data[i] - data[i-1]);

        for(int i = n-2; i >= 0; i--) {
            for(int j = 0; j < i; j++) {
                if(d[j] > d[j+1]) {
                    int temp = d[j];
                    d[j] = d[j+1];
                    d[j+1] = temp;
                }
            }
        }
        bool flag = true;
        for(int i = 0; i < n-1; i++) {
            if(d[i] != i+1){
                flag = false;
                break;
            }
        }
        if(flag) {
            printf("Jolly\n");
        }else {
            printf("Not jolly\n");
        }
        
    }
    return 0;
}
