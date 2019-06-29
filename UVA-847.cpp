# include <cstdio>
# include <iostream>
# include <string.h>
using namespace std;
# define ll long long
int win(ll p, ll n) {
	if (p * 9 < n && p * 18 >= n) return 0; 
	for(int i = 2; i<= 9; i++) {
		if(win(p*i, n) == 0){
			return 1;
		}
	}
	return 0;
}
int main() {
	//freopen("in.text", "r", stdin);
	ll n;
	while(cin>>n) {
		if(n == 1) 
			printf("Ollie wins.\n");
		else if(n >= 2 and n <= 9) 
			printf("Stan wins.\n");
		else {
			if(win(1, n)) {
				printf("Stan wins.\n");
			} else {
				printf("Ollie wins.\n");
			}
		}
	}
	return 0;
}
