# include <iostream>
# include <cstring>
# include <cstdio>
using namespace std;
int main()
{
//freopen("in.text","r",stdin);
   long int t,b,i,j,d,cont=0;
   string a;
   cin>>t;
   while(t--)
   {
       d=0;
       cin>>a;
       cin>>b;
       if(a[0]=='-')
       {

        j=1;
       }
       else
       {
           j=0;
       }
       int len=a.length();
       while(j<len)
       {
           d=d*10+(a[j]-'0');
           d=d%b;
           j++;
       }
       if(d)
       {
           printf("Case %ld: not divisible\n",++cont);
       }
       else
       {
           printf("Case %ld: divisible\n",++cont);
       }
   }
   return 0;
}
