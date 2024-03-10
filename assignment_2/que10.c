#include<stdio.h>
int main()
{
 char c;

 printf("enter the character :\n");
 scanf("%c",&c);

 if((c>=65 && c<=90) || (c>=97 && c<=122) )
  {
    printf("%c is a letter\n",c);

	if(c>=65 || c<=90)
	 printf("%c is an UPPERCASE\n",c);
	else if(c>=97 || c<=122)
	 printf("%c is LOWERCASE\n",c);
  }
 else if(c>=48 || c<=57)
  printf("%c is digit\n",c);
 else if(c==32 || c==9 || c==13 || c==10)
  printf("%c is a space,tab,carriage return or new line\n",c);
 else
  printf("not listed above\n");

 return 0;
}
