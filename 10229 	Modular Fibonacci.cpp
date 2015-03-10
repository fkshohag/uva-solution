#include <iostream>
#include <cassert>
# include <cstdio>
# define ll long long
using namespace std;

struct matrix {
  ll v[5][5];
  int row, col;
};
ll mod,i,j,k;
matrix multiply(matrix a, matrix b) {
  assert(a.col == b.row);
  matrix r;
  r.row = a.row;
  r.col = b.col;
  for (i = 0; i < r.row; i++) {
    for (j = 0; j < r.col; j++) {
      ll sum = 0;
      for (k = 0; k < a.col;  k++) {
        sum += (a.v[i][k]%mod)* (b.v[k][j]%mod);
        sum %= mod;
      }
      sum%=mod;
      r.v[i][j] = sum;
    }
  }
  return r;
}

matrix power(matrix mat, int p) 
{
  assert(p >= 1);
  if (p == 1) return mat;
  if (p % 2 == 1) 
    return multiply(mat, power(mat, p - 1));
  matrix ret = power(mat, p / 2);
  ret = multiply(ret, ret);
  return ret;
}

int main() {
  //freopen("in.text","r",stdin);
  ll a=0, b=1, n, m;
  while (cin>>n>>m) 
  {
    matrix mat;
    mat.row = mat.col = 2;
    mat.v[0][0] = mat.v[0][1] = mat.v[1][0] = 1;
    mat.v[1][1] = 0;
    mod = 1;
    for (i = 0; i < m; i++) mod *= 2;
    if (n < 3) {
      if (n == 0) cout << a << endl;
      if (n == 1) cout << b << endl;
      if (n == 2) cout << (a+b) % mod << endl;
    } else { 
      mat = power(mat, n - 1);
      int ans = b * mat.v[0][0] + a * mat.v[0][1];
      ans %= mod;
      cout << ans << endl;
    }
  }
  return 0;
}
