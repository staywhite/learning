#include<stdio.h>
int main()
{
  int a,b,c,d,number;
  printf("Enter a number between 0 and 32767:");
  fflush(stdout);
  scanf("%d",&number);
  
  a = number%8;
  b = (number/8)%8;
  c = ((number/8)/8)%8;
  d = (((number/8)/8)/8)%8;
  
  printf("In octal, your number is:0%d%d%d%d",d,c,b,a);
  return 0;
 } 