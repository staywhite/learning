#include<stdio.h>
/*int main()
{
	int amount,x,y,z,q;
    printf("Enter a doller amount:\n");
    fflush(stdout);
    scanf("%d",&amount);
	 
	amount =    20*x+10*y+5*z+1*q;
    printf("$20 bills:%d\n",x);
    printf("$10 bills:%d\n",y);
    printf("$5  bills:%d\n",z);
    printf("$1  bills:%d\n",q);
    
    return 0;	
} 
*/
 int main()
 { int payment;
   int S20,S10,S5,S1;
   printf("Enter a dollar amount:");
   scanf("%d",&payment);
   fflush(stdin);
   //payment=93;
   S20=payment/20;                //需要几个20$的大钞
   S10=(payment%20)/10;      //剩下的零头看需要几个10$的钞票
   S5 =(payment%10)/5;         //不足10$的零头需要几个5$的钞票
   S1 =payment%5;                //。。。只所以可以这样做是因为1,5,10,20恰好存在倍数的关系
   printf("Payment %d need: $20x%d, $10x%d, $5x%d, $1x%d\n",payment,S20,S10,S5,S1);
   
   return 0;
   }
 
 
 
	
    	
	

	
	
	
	
	