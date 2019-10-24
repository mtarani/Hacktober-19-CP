#include<stdio.h>
int main()
{
int i,n,a,b,c,d;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d %d %d",&a,&b,&c,&d);
if(b>d)
{
printf("%d %d\n",(c-a)-1,60-b+d);
}
else
{
printf("%d %d\n",c-a,d-b);
}
}
return 0;
}
