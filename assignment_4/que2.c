   #include<stdio.h>
   
   int poww(int bas,int ind);
   
   int main()
   {
    int index,base,result;
   
    printf("enter the base and index of number:\n");
    scanf("%d %d",&base,&index);
  
    result=poww(base,index);
  
    printf("power of %d to %d is %d\n",base,index,result);
  
  
    return 0;
   }
  
  int poww(int bas,int ind)
  {
   int res=1;
  
    while(ind!=0)
    {
     res=res * bas;
     
	 ind--;
    }
     return res;
  
  }
  

