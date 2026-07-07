#include<stdio.h>
int main()
{
	int ele=0;
	int a[6]={2,1,0,2,4};
	int i,j;
	printf("Enter the Element: ");
	scanf("%d",&ele);
	
	a[5]=a[4];
	a[4]=a[3];
	a[3]=a[2];
	a[2]=a[1];
	a[1]=a[0];
	a[0]=ele;
	
	printf("New element is added: ");
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
}
