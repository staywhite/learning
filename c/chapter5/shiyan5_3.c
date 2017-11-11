#include<stdio.h>
int main()
{
	int a,b;	//a代表个位，b代表十位
    printf("Enter a two-digit number :");
	fflush(stdout);
	scanf("%1d%1d",&b,&a);
	printf("You entered the number ");
    switch (b){
		case 1:printf("ten");      break;
		case 2:printf("twenty");   break;
		case 3:printf("thirty");   break;
		case 4:printf("fourty");   break;
		case 5:printf("fifty");    break;
		case 6:printf("sixty");    break;
		case 7:printf("seventy");  break;
		case 8:printf("eighty");   break;
		case 9:printf("nighty");   break;
		
		}	
		printf("-");
    switch (a){
		case 1:printf("one");   break;
		case 2:printf("two");   break;
		case 3:printf("three"); break;
		case 4:printf("four");  break;
		case 5:printf("five");  break;
		case 6:printf("six");   break;
		case 7:printf("seven"); break;
		case 8:printf("eight"); break;
		case 9:printf("nignt"); break;
	}
	return 0;
}