#include<stdio.h>
int main()
{
 int i,n,a,b=0,c=0,d=0;
 char s[99999];
 scanf("%s",s);
 scanf("%d",&n);
 for(i=0;s[i]!='\0';i++)
 
  if(s[i]>=65&&s[i]<=90){
      if(s[i]==90 && n%26==0){
      printf("%c",s[i]);}
   else if((s[i]+n)>90){
    printf("%c",(((s[i]+n)-90)%26)+64);}
    else{
    printf("%c",s[i]+n);}}
  else if (s[i]>=97&&s[i]<=122){
      if(s[i]==122 && n%26==0){
      printf("%c",s[i]);}
  else if((s[i]+n)>122){
      
  printf("%c",(((s[i]+n)-122)%26)+96);}
    else{
    printf("%c",s[i]+n);}}
  else if(s[i]>47 && s[i]<58){
  if((s[i]+n)>58){
  printf("%c",(((s[i]+n)-58)%10)+48);}
    else{
    printf("%c",s[i]+n);}}
  else{
  printf("%c",s[i]);
 }
}
