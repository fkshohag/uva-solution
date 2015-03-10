# include <cstdio>
# include <iostream>
# include <cstring>
using namespace std;
bool prime[20000010];
int tprime[20000010];
void sieve()
{
    int i,j;
    for(i=4;i<=20000000;i+=2)
    {
     prime[i]=false;
    }
    for(i=3;i*i<=20000000;i+=2)
    {
        if(prime[i]==true)
        {
            for(j=i*i;j<=20000000;j+=i+i)
            {
                prime[j]=false;
            }
        }
    }
}
void twin_prime()
{
    int j=1;
    for(int i = 3;i<=20000000;i++){
        if(prime[i] && prime[i+2])
        {
            tprime[j++] = i;
        }
    }
}
int main()
{
   memset(prime,true,sizeof prime);
    sieve();
    twin_prime();
    int n;
    while(scanf("%d",&n)==1)
    {

          printf("(%d, %d)\n",tprime[n],tprime[n]+2);
    }
   return 0;
}
