#include<stdio.h>
int main()
{
  /*int a,b;
  printf("Enter a two-digit number:");
  fflush(stdout);
  scanf("%d%d",&a,&b);
  printf("The reversal:%d%d",b,a);
  
  return 0;
  

  int a,b,c,d,number;
  printf("Enter a number between 0 and 32767:");
  fflush(stdout);
  scanf("%d",&number);
  
  a = number%8;
  b = (number/8)%8;
  c = ((number/8)/8)%8;
  d = (((number/8)/8)/8)%8;
  
  printf("In octal, your number is:0%d%d%d%d",d,c,b,a);
  return 0;*/
  
  
  int d,i1,i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum,total;
  printf("Enter the num:");
  fflush(stdout);
  scanf("%d%d%%d%d%d%d%d%d%d%d%d",&d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5); 
  
  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * (first_sum + second_sum);
  printf("Check dight:%d\n",9-((total - 1)%10));
  return 0;  
  
  
}




