# include <iostream>
# include <cstdio>

using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    int n, hight[51], total_height, move;
    int counter = 1;

    while(true) {
        scanf("%d", &n);
        if(n == 0) break;
        total_height = 0;
        move = 0;

        for(int i = 0; i < n; i++) {
            scanf("%d", &hight[i]);
            total_height += hight[i];
        }

        int average_height = (total_height/n);

        for(int i = 0; i < n; i++) {
            if(hight[i] > average_height) {
                move += (hight[i] - average_height);
            }
        }
        printf("Set #%d\n", counter);
        printf("The minimum number of moves is %d.\n\n", move);
        counter++;
    }
    return 0;
}
