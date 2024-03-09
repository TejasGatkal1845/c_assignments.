#include<stdio.h>
int main()
{
 int a,b,c,d,e,p,q,r,s,m;
  printf("enter the 4 digit number=");
  scanf("%d",&m);

  a=m;

  b=a/1000;
  p=b*1000;
  a=a%1000;
  
  c=a/100;
  q=c*100;
  a=a%100;

  d=a/10;
  r=d*10;
  a=a%10;

  e=a;
  s=e*1;
  
  int rem=1,res=0;
  for(int i=1;i<=4;++i)
  
  {
   rem=m%10;
   m=m/10;
   res=res*10 + rem;

  }

  printf("face value  is %d  %d  %d  %d\n",b,c,d,e);

  printf("place value of  %d  %d  %d  %d\n",p,q,r,s);
  printf("reverse number  is %d \n",res);
 return 0;

}
