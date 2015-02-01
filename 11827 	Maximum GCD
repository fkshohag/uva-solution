#include<iostream>
# include <cstdio>
# include <sstream>
using namespace std;
int gcd(int a,int b)
{
    if(a%b==0)return b;
    return gcd(b,a%b);
}
int main()
{
    //freopen("in.text","r",stdin);
    char ch[310];
    int data[310];
    int n,i,j;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        int N=0;
        gets(ch);
        stringstream in(ch);
        while(in>>data[N])
        {
            N++;
        }
        int ans=0;
        for(i=0;i<N;i++)
        {
            for(j=i+1;j<N;j++)
            {
               ans=max(ans,gcd(data[i],data[j]));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
