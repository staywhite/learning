#include<stdio.h>
int main()
{
    int num;
    printf("This program prints a table of squares\n");
    printf("Enter the biggest num:");
    fflush(stdout);
    scanf("%d",&num);
    for(int i=1;i<num;i++)
	    printf("%8d%8d\n",i,i*i);
    return 0;


}
