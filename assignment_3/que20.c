#include <stdio.h>
int main()
{
    int num,sum,count=1,r;
    while (count<=500)
	{
        num=count;
        sum=0;
        while (num)
		{
            r=num%10;
            sum=sum+r*r*r;
            num=num/10;
        }
        if (count==sum)
		{
            printf("%-5d\n",count);
        }
        count++;
    }
    return 0;
 
  num=count;



 return 0;
}
