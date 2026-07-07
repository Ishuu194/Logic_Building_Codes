#include<stdio.h>

int main()
{
    int a,b,s;

    for(a=1; a<6; a++)
    {
        for(s=0; s<2*(5-a); s++)
        {
            printf(" ");
        }

        for(b=1; b<=a; b++)
        {
            printf("1 ");
        }

        printf("\n");
    }

    return 0;
}
