#include<stdio.h>
int main()
{
    int amount;
	printf("Enter a amount:\n",amount);
	fflush(stdout);
	scanf("%d",&amount);
	
	float tax;
	tax = amount * (1.05);
	printf("with tax added:%f\n",tax);
	return 0;

}