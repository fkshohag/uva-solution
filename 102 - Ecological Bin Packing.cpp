# include <cstdio>
# include <iostream>
using namespace std;
int main()
{
    string str="";
    int b1,g1,c1,b2,g2,c2,b3,g3,c3;
    int BCG,BGC,CBG,CGB,GBC,GCB,result;
    while(scanf("%d %d %d %d %d %d %d %d %d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        result=0;
        BCG=g1+c1+b2+g2+b3+c3;
        result=BCG;
        str="BCG";
        BGC=g1+c1+b2+c2+b3+g3;
        if(result>BGC)
        {
            result=BGC;
            str="BGC";
        }
        CBG=b1+g1+g2+c2+b3+c3;
        if(result>CBG)
        {
            result=CBG;
            str="CBG";
        }
        CGB=b1+g1+b2+c2+c3+g3;
        if(result>CGB)
        {
            result=CGB;
            str="CGB";
        }
        GBC=b1+c1+g2+c2+b3+g3;
        if(result>GBC)
        {
            result=GBC;
            str="GBC";
        }
        GCB=b1+c1+b2+g2+g3+c3;
        if(result>GCB)
        {
            result=GCB;
            str="GCB";
        }
        cout<<str<<" "<<result<<"\n";
    }
    return 0;
}
