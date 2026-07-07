#include<stdio.h>
int main()
{
    int a,b,s;
    char Ch='A';

    for(a=0; a<6; a++)
    {
        for(s=0; s<2*(5-a); s++)
        {
            printf(" ");
        }
        for(b=1; b<=a; b++)
        {
            printf("%c ",Ch);
            Ch++;
        }
        printf("\n");
    }
     return 0;
}
