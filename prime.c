#include<stdio.h>
int main()
{
    int i,j,n;
    int count=0;
    scanf("%d ",&n);
    for(i=2;i<=n;i++)
     {
         for(j=2;j<=i;j++)
         {
          if(i%j==0)
          {
              count++;
          }
         }
          if(count==1)
          {
              printf("%d ",i);
          }
       count=0;
             
         
     }
    return 0;
}
