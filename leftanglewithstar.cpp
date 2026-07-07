#include<stdio.h>

int main()
{
    int a,b,s;

    for(a=0; a<5; a++)
    {
        for(s=0; s<0; s++)
        {
            printf(" ");
        }

        for(b=0; b<=a; b++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
