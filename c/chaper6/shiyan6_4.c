#include<stdio.h>
int main()
{
    int i;
    float a,e,n;
    printf("Enter a n:");
    scanf("%f",&n);
    a=1;i=1;e=1;
    do{
       a=a*(1.0/i);
       e=e+a;
       i++;}while(a>=n);

   printf("the e is:%.2f",e);

      return 0;

}

