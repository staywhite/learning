#include<stdio.h>
int main(void)
{
	float x,  y, z, a, b, c;
	
    printf("Enter amount of loan:\n",x);
    fflush(stdout);	
    scanf("%f",&x);
    
    printf("Enter interest rate: \n",y);	
	fflush(stdout);
    scanf("%f",&y);
	 
	printf("Enter monthly payment:\n",z);	
	fflush(stdout);
    scanf("%f",&z);
	
	a = x*(1+(y/100/12))-z;
	b = a*(1+(y/100/12))-z;
	c = b*(1+(y/100/12))-z;
	
	printf("Balance remaining after firet payment:%f\n",a);
	printf("Balance remaining after second payment:%f\n",b);
	printf("Balance remaining after third payment:%f\n",c);
	
	return 0;
}  
 
    