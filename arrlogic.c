#include<stdio.h>
int main()
{
	int arr[6]={1,2,3,4,5,6};
	int i;
	
	printf("Original array is:");
	for(i=0;i<=5;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	printf("Reverse array is:");
	for(i=5;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	arr[6]=4;
	printf("Adding element:");
	for(i=0;i<7;i++)
	{
		printf("%d",arr[i]);
	}
}
