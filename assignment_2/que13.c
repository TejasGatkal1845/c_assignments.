#include<stdio.h>
int main()
{
 float pt;

 printf("enter the point:\n");
 scanf("%f",&pt);

 if(pt==0)
  printf("%f is on positive x-axis\n",pt);

 else if(pt>0 && pt<90)
  printf("%f is in first quadrant\n",pt);

 else if(pt==90)
   printf("%f is on positive y-axis\n",pt);

 else if(pt>90 && pt<180)
  printf("%f is in second quadrant\n",pt);
 
 else if(pt==180)
  printf("%f is on negative x-axis\n",pt);
 
 else if(pt>180 && pt<270)
  printf("%f is in third  quadrant\n",pt);

 else if(pt==270)
  printf("%f is on negative y-axis\n",pt);

 else if(pt>270 && pt<360)
  printf("%f is in fourth quadrant\n",pt);

 else if(pt==360)
  printf("%f is on positive x-axis\n",pt);


 return 0;
}

