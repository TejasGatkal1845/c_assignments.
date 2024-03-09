#include <stdio.h>

int main()
{
    char ch;

    
    printf("Enter any character: ");
    scanf("%c", &ch);


    if(ch >= 'A' && ch <= 'Z')
    {
        printf("'%c' is uppercase alphabet\n", ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("'%c' is lowercase alphabet\n", ch);
    }
    else if(ch >= '0' && ch <='9')
    {
        printf("'%c' is digit\n", ch);
    }
	else
	{
        printf("'%c' is other than alphabet or digit\n",ch);
	}

    return 0;
}
