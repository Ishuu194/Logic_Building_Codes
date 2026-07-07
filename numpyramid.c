#include <stdio.h>

int main() {
	int a,b,s;
	for(a=1;a<=5;a++)
	{
		int n= 1;
		for(s=1;s<=5-a;s++)
		{
			printf(" ");
		}
		
		for(b=0;b<2*a-1;b++)
		{
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
    return 0;
}
