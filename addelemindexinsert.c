#include<stdio.h>
int main()
{
	int i[6]={1,2,3,4,5};
	int ele=0;
	int a,b;
	int ind=0;
	printf("Enter Element: ");
	scanf("%d",&ele);
	printf("\nEnter Index: ");
	scanf("%d",&ind);
	if(ind<5)
	{
	    for(b=5;b>ind-1;b--)
	    {
	    	i[b] = i[b-1];
		}
		i[ind]=ele;
	}
	
	for(a=0;a<6;a++)
	{
		printf("%d ",i[a]);
	}
	return 0;
}
