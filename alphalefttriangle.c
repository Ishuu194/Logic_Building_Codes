#include<stdio.h>

int main()
{
    int a,b,s;
    char i='A';

    for(a=0; a<5; a++)
    {
        for(s=0; s<0; s++)
        {
            printf(" ");
        }

        for(b=0; b<=a; b++)
        {
            printf("%c ",i);
            i++;
        }

        printf("\n");
    }

    return 0;
}
