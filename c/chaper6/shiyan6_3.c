#include<stdio.h>
int main()
{
    float e,a;
    int i,n;
    printf("Enter a n:");
    scanf("%d",&n);


    for (i=1,e=1,a=1;i<=n;i++)
         {
          a=a*(1/i);//A is qiu jiecheng
          e=e+a;
         }
   printf("The e is :%f",e);
   return 0;
}