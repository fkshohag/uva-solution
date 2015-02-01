    # include <stdio.h>
    int main()
    {
        int i,j,k,a[100],test,n,count,temp;
        scanf("%d",&test);
        for(i=1;i<=test;i++)
        {
            count=0;
            scanf("%d",&n);
            for(j=1;j<=n;j++)
            {
                scanf("%d",&a[j]);
            }
            for(k=1;k<=n;k++)
            {
               if(a[k]!=k)
               {
                   for(j=k+1;j<=n;j++)
                   {
                       if(a[j]==k)
                       {
                           temp=a[k];
                           a[k]=a[j];
                           a[j]=temp;
                           count++;
                       }
                   }
               }
            }
            printf("Case %d: %d\n",i,count);
        }
    }
     
