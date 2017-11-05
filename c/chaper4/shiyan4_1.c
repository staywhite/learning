#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter a two-digit number:");
  fflush(stdout);
  scanf("%d",&c);
  a = c/10;
  b = c%10;
  printf("The reversal:%d",b*10+a);
  
  return 0;
    
}




