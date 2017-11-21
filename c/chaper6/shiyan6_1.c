#include<stdio.h>
int main()
{
	int i;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%d",&i);
	printf("The reversal is:");
	do{
		printf("%d",i%10);
	i=i/10;}while(i>0);
	return 0;
	
	
}