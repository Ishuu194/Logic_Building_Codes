#include<stdio.h>
int main()
{
    char str[50];
    char ch,i;
    
    printf("Enter String: ");
    scanf("%s",str);
    
    printf("Enter the Character: ");
    scanf(" %c",&ch);
    
	for(i=0;i<50;i++)
	{
		if(str[i]==ch)
		{
	      	printf("Index = %d",i);
	    }
	}
	return 0;
}

