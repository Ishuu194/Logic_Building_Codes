#include<stdio.h>
int main()
{
	int i;
	int num[6]={1,9,0,4,2,5};
	int index=0;
	printf("Enter the index : ");
	scanf("%d",&index);
	for(i=0;i<6;i++)
	{
		if(i==index)
		{
			printf("%d",num[i]);
		}
	}
	printf("value is not found.");
}
