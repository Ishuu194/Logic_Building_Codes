#include<stdio.h>
int main()
{
	int ele=0;
	int arr[6]={2,1,0,2,4};
	int i,j;
	printf("Enter the Element: ");
	scanf("%d",&ele);
	printf("Before adding: ");
	for(i=0;i<5;i++)
	{
			printf("%d ",arr[i]);
	}
	for(j=5;j>0;j--)
	{
		arr[j]=arr[j-1];
	}
	arr[0]=ele;
	printf("\nAfter adding: ");
	for(i=0;i<6;i++)
	{
			printf("%d ",arr[i]);
	}
}
