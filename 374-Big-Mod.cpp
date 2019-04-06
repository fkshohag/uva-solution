# include <cstdio>
# include <iostream>
using namespace std;

# define i64 long long

i64 F(i64 B, i64 P, i64 M) {
	if (P == 0) return 1;
	if(P % 2 == 0) {
		i64 ret = F(B, P / 2, M);
		return ((ret % M) * (ret % M)) % M;
	}else {
		return ((B % M) * (F(B, P-1, M) % M)) % M;
	}
}

int main() {
	//freopen("test.txt","r",stdin);
	i64 B,P,M;
	while(scanf("%lld\n %lld\n %lld", &B, &P, &M) != EOF) {
		printf("%lld\n", F(B, P, M));
	}
	return 0;
}
