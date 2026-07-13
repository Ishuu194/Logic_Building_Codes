#include<stdio.h>
int main()
{ 
    int i;
	char str[7]="FORTUNE";
	int ind;
	printf("Enter Index: ");
	scanf("%d",&ind);
	for(i=0;i<7;i++)
	{
		if(i==ind)
		{
			printf("Character at Index is: %c",str[i]);
		}
	}
	return 0;
}
