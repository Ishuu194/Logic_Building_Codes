#include<stdio.h>
int main()
{
	int a,b,s;
	char C='A';
	for(a=0;a<5;a++)
	{
	for(s=2;s<2*(5-a);s++)  
		{
			printf(" ");
		}
		for(b=0;b<=a;b++)
		{
			printf("* ");
		}
		printf("\n");
	}	
	return 0;
}
