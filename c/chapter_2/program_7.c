#include<stdio.h>
int main()
{
	int amount,x,y,z,q;
	
	printf("Enter a amount:\n");
	fflush(stdout);
	scanf("%d",&amount);
	
	x = amount/20;                    //因为用的是int函数，只会得出一个整数结果
	y = (amount-20*x)/10;             //没有除尽的回到这里继续除
	z = (amount - 20*x - 10*y)/5;
	q = (amount - 20*x - 10*y - 5*z); 
	
	printf("$20 bills:%d\n",x);
	printf("$10 bills:%d\n",y);
	printf("$5  bills:%d\n",z);
	printf("$1 bills:%d\n",q);
	
	return 0;
	
	
}
