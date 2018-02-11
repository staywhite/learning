#include<stdio.h>
int main()
{
    int remainder;
    int a,b;
    printf("Enter a fraction:");
    fflush(stdout);
    scanf("%d/%d",&a,&b);
    while (b!=0){
	    remainder=a%b;
            a=b;
	    b=remainder;}
    
    printf("in lowest term:%d/%d",a/remainder,b/remainder);
   

return 0;
}
