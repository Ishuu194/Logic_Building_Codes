#include<stdio.h>
int main()
{
    char str[7]="FORTUNE";
    char ch='R';
    int i;
	for(i=0;i<5;i++)
	{
		if(ch==str[i])
		{
	      	printf("%d",i);
	    }
	}
	return 0;
}

