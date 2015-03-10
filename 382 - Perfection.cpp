# include <iostream>
# include <cstdio>
using namespace std;
int main()
{

    int n,sum,i;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        sum=0;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        printf("%5d  ", n);

        if(sum==n)
        {
            printf("PERFECT\n");
        }
        else if(sum>n)
        {
            printf("ABUNDANT\n");
        }
        else if(sum<n)
        {
             printf("DEFICIENT\n");
        }
    }
    printf("END OF OUTPUT\n");
    return 0;
}
