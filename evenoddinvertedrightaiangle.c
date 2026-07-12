#include<stdio.h>
int main()
{
	int r,c,s;
	for(r=5;r>=1;r--) //5,5>=1
	{
		for(c=0;c<r;c++)   //1;1<=4;
		{
		  if(r%2 == 0)
		     {
		      	printf("*");
		     }
	      else
	      {
	      	printf("#");
		  }
		}
		printf("\n");
	}
	return 0;
}
