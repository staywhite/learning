
#include<stdio.h>
int main()
{
	int height, length, width, volume; 
	float weight;
	printf("Enter height of box:\n");
	fflush(stdout);
	scanf("%d",&height);
	
	printf("Enter width of a box:\n");
	fflush(stdout);
	scanf("%d",&width);
	
	printf("Enter length of a box:\n");
	fflush(stdout);
	scanf("%d",&length);
	
	volume = height * length * width;
	weight = (volume + 165)/166;
	printf("Volume(cubic iches): %d\n",volume);
	printf("Dimensional weight (pounds): %f\n",weight);
	
	return 0;
}