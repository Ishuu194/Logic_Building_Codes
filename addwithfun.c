#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("%d",add(a,b));
	
}
