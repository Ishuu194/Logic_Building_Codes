#include<stdio.h>
int square(int a)
{
	printf("Square is %d\n",a*a);
	printf("Size of Int %d\n",sizeof(int));
	printf("Size of Variable %d",sizeof(a));
}
int main()
{
	int num=500;
	square(num);
	return 0;
}
