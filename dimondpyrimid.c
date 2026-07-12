#include<stdio.h>
int main()
{  
    //upper triangle
    int i,j,s;
    for(i=1;i<=5;i++)
    {
    	for(s=1;s<=5-i;s++)
    	{
    		printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	//lower triangle
	for (i=4;i>=1;i--)
	{
		for(s=1;s<=5-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
