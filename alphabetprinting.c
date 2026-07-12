#include<stdio.h>
int main()
{  
    //upper triangle
    int i,j,s;
    for(i=1;i<=3;i++)
    {
    	char ch='A';
    	for(s=1;s<=3-i;s++)
    	{
    		printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	
	//lower triangle
	for (i=2;i>=1;i--)
	{   
	    char ch='A';
		for(s=1;s<=3-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
	return 0;
}
