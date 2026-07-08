#include<stdio.h>
int main()
{
	int i[6]={1,2,3,4,5};
	int ele=0,a;
	printf("Enter Element: ");
	scanf("%d",&ele);
	
		i[5]=i[4];
	    i[4]=i[3];
	    i[3]=ele;
	
	for(a=0;a<6;a++)
	{
		printf("%d ",i[a]);
	}
	return 0;
}
