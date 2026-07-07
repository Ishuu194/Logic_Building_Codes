#include <stdio.h>

int main() {
	int a,b,s;
	for(a=0;a<5;a++)
	{
		for(s=1;s<1*(5-a);s++)
		{
			printf(" ");
		}
		
		for(b=0;b<2*a+1;b++)
		{
			printf("*");
		}
		printf("\n");
	}
    return 0;
}
