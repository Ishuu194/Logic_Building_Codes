#include<stdio.h>
int main()
{ 
    int i;
	char str[7]="FORTUNE";
	int ind=6;
	for(i=0;i<7;i++)
	{
		if(i==ind)
		{
			printf("%c",str[i]);
		}
	}
	return 0;
}
