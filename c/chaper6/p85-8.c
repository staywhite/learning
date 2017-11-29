#include<stdio.h>
int main()
{
	/* //练习题*8  
	int i=10;
	while(i>=1){
	i/=2;
	printf("%d",i);
	i++;
	if (i==2)
	break;}
	              
	return 0;
	*/
	
	
	//练习题11
	/*int sum=0,i;
	for(i=0;i<10;i++){
		if(i%2)
			continue;//这里是指当（i%2为真即值为1时，执行continue，也即跳过sum+=i直接再次开始循环）
		sum +=i; 
	}
	printf("%d\n",sum);
	return 0;
	*/
	
	/*
	//编程题1
	int num,max;
	do{
		printf("Enter a number:");
		fflush(stdout);
		scanf("%d",&num);
	    if(num>max)
			max=num;
	}while(num>0);
	
	printf("The biggest number is:%d ",max);
	return 0;*/
	
	
	/* //程序2
	2. [was #2] 
#include <stdio.h>

int main(void)
{
  int m, n, remainder;

  printf("Enter two integers: ");fflush(stdout);
  scanf("%d%d", &m, &n);

  while (n != 0) {
    remainder = m % n;
    m = n;                   
    n = remainder;
 }*/
}