#include<stdio.h>
int main()
{
	int i,j;
	int num=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d", num);//1
			num++;//num=mum+1=2;3;4;5
		}
		printf("\n");
	}
}
