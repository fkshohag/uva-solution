#include<stdio.h>
#include<math.h>
int main()
{
  double n,p,r;
  while(scanf("%lf %lf",&n,&p)==2)
  {
      r=pow(p,1/n);
      printf("%.0lf\n",r);
  }
  return 0;
}
