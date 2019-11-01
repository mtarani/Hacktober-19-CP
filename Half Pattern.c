#include <stdio.h>

int main()
{
    int qo, wow;
for(qo=5;qo>=1;qo--)
{
    for(wow=1;wow<=5;wow++)
    {
        if(wow<=qo)
        {
            printf("%d",wow);
        }
        else
            printf(" ");
    }
    for(wow=4;wow>=1;wow--)
    {
        if(wow<=qo)
        {
            printf("%d",wow);
        }
        else
            printf(" ");
    }
        printf("\n");
    }
    return 0;
}
