#include<stdio.h>
int main()
{  
    //upper triangle
    int i,j,s;
    for(i=1;i<=3;i++)
    {
    	for(s=1;s<=3-i;s++)
    	{
    		printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			if(i==1||i==3)
			{
				printf("1");
			}
			else
			{
				printf("!");
			}
		}
		printf("\n");
	}
	
	//lower triangle
	for (i=2;i>=1;i--)
	{   
		for(s=1;s<=3-i;s++)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++)
		{
		  	if(i==1||i==3)
			{
				printf("1");
			}
			else
			{
				printf("!");
			}
		}
		printf("\n");
	}
	return 0;
}
