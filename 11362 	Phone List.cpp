# include <cstdio>
# include <iostream>
# include <cstring>
# include <algorithm>
using namespace std;
string numbrer[10000+2];
bool prefix_chack(string a,string b)
{
    int i;
    if(b.length()<a.length())return false;
    for(i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])return false;
    }
    return true;
}
int main()
{
    //freopen("in.text","r",stdin);
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>numbrer[i];
        }
        sort(numbrer,numbrer+n);
        bool flag=true;
        for(i=0;i<n-1;i++)
        {
            if(prefix_chack(numbrer[i],numbrer[i+1]))
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
