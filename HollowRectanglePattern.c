#include<stdio.h>
int main(){
	int i,p;
	for(i=0;i<5;i++)
	{
		for(p=0;p<5;p++)
		{
			if(i==0||i==4||p==0||p==4)
			{
				    printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
}
