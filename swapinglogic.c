//swap

#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the two Number : ");
	scanf("%d %d",&a,&b);
	
	int c;
	printf("Before swap\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After swap\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
