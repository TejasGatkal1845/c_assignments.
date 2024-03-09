#include<stdio.h>
int main()
{
	int i,n,max=0,a;
	printf("number of elements=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter a number=");
		scanf("%d",&a);
		if(max<a)
		{
			max=a;
		}
		
		
	}
	printf("Maximum no is %d",max);
}
