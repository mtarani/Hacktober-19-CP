#include<stdio.h>
int main()
{
    int c=0,r;
    long n;
    scanf("%ld",&n);
    if(n==1)
    printf("1\n");
    else if(n==2)
    printf("1\n");
    else if(n==3)
    printf("1\n");
    else if(n==4)
    printf("1\n");
    else
    {
        r=n%5;
        c=n/5;
        if(r==1)
        c+=1;
        else if(r==2)
        c+=1;
        else if(r==3)
        c+=1;
        else if(r==4)
        c+=1;
        printf("%d\n",c);
    }
   return 0; 
}
