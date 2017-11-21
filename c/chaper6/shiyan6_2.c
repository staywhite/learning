#include<stdio.h>
int main()
{
   int times,i;
   float left, loan,rate,mpay;
   printf("Enter amount of loan:");
   scanf("%f",&loan);
   printf("Enter interest rate:");
   scanf("%f",&rate);
   printf("Enter monthly payment:");
   scanf("%f",&mpay);
   left =(loan*(1+(rate*0.01)/12)-mpay);

   printf("Enter the paytimes:");
   scanf("%d",&times);
   i = 1;
   do {

      printf("The %d pay     the left money:%f\n",i,left);
      left = left*(1+(rate*0.01/12))-mpay;
      i++;
      } while(i<=times);

    return 0;

	
}