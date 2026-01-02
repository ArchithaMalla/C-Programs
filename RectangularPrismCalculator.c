#include<stdio.h>
main()
{
	float lenght,width,height,volume,surface_area;
	printf("enter lenght,width, and height :");
	scanf("%f %f %f",&lenght,&width,&height);
	volume=lenght*width*height;
	surface_area=2*((lenght*width)+(lenght*height)+(width*height));
	printf("For a prism with dimentions %.2f*%.2f*%.2f:\n",lenght,width,height);
	printf("volume:%.2f\n",volume);
	printf("surface area:%.2f",surface_area);
}
