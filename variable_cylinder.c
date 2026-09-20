// This program calculates the volume and surface area of a cylinder.

/*
Author: Dunford Anaya
Adm No: BCS-05-0074/2026
Date: 20th September 2026
Version 1
*/

#include <stdio.h>

int main(){
	
	float radius; // %f
	float height; // %f
	float volume; // %f
	float surface_area; // %f
	float pi = 3.142; // %f
	
	//prompt the user to enter radius and height.
	
	printf("Enter the radius of the cylinder: \t", radius);
	scanf("%f", &radius);
	
	printf("Enter the height of the cylinder: \t", height);
	scanf("%f", &height);
	
	volume = pi*radius*radius*height;
    surface_area = (2*pi*radius*radius) + (2*pi*radius*height);
    
    printf("Volume = %.2f \n", volume);
    printf("Surface Area = %.2f \n", surface_area);
	
	return 0;
	
}