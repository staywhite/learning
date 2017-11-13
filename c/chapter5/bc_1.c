#include<stdio.h>
int main()
{
	int num,digits;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%d",&num);
	
	if (0<num<=9)
		digit = 1;
	if (num>=10&&num<=99)
		digit = 2;
	if (num>=100&&num<=999)
		digit = 3;
	if (num>=1000&&num<=9999)
		digiit = 4;
	printf("The number %d has %d digits",num,digit);
	return 0;
	
   		
	
}