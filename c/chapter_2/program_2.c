#include<stdio.h>
float tiji(float x,int r,float k)
{
	return k*x*r*r*r;
	
}

float tiji1(int r)
{
	return (4.0/3)*3.14 * r*r*r;
	
}
int main()
{ 
    float v = 0.0;
    v = tiji(3.14, 10, 4.0/3);
	printf("v=%f\n",v);
	
	float v1 = 0.0;
    v1 = tiji1(10);
	printf("v1 = %f\n", v1);
	
 return 0;	
}