//computes the dimensional weight of a 12" x 10" x 8" box
 #include<stdio.h>
 
 int main()
 {
	 int height, length, width, volume,weight;
	 height = 8;
	 length =12;
	 width = 10;
	 volume = height * length * width;
	 weight = (volume + 165)/ 166;
	 
	 printf("dimensions: %dx%dx%d\n",length, width, height);
	 printf("volume (cubic inches): %d\n",volume);
	 printf("dimensional weight (pounds):%d\n",weight);
	 
	 return 0;
	 
	 
	 
	 
	 
	 
 }