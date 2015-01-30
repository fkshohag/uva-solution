# include <iostream>
# include <cstdio>
# include <iomanip>
# define ll long long
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    //freopen("in.text","r",stdin);
    ll step,mod;
    while(cin>>step>>mod)
    {
        ll m=gcd(step,mod);
        cout<<setw(10)<<step<<setw(10)<<mod<<"    ";
        if(m==1)
        {
            cout<<"Good Choice";
        }
        else
        {
            cout<<"Bad Choice";

        }
        cout<<endl<<endl;
    }
    return 0;
}
