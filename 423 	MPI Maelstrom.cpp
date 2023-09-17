#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>mat(101, vector<int>(101));
    vector< long long>dis(n, INF);

    dis[0]=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i==j)
                mat[i][j]=0;
            else
            {
                string s;
                cin>>s;
                if(s=="x")
                    mat[i][j]= INF;
                else
                    mat[i][j]= stoi(s);

                mat[j][i]= mat[i][j];
            }
        }
    }
///------------Bellman-Ford algorithm-----------------
    int N=n-1;
    while(N--)
    {
        for(int u=0; u<n; u++)
            for(int v=0; v<n; v++)
            {
                int w=mat[u][v];
                if(w!=INF && dis[u]+w<dis[v])
                    dis[v]=dis[u]+w;
            }
    }
///----------------------------------------------------------
    long long min_Communi = 0;
    for (int i = 0; i < n; i++)
        min_Communi = max(min_Communi, dis[i]);
    cout<<min_Communi<<endl;
    return 0;
}
