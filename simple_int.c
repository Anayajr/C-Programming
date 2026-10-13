#include <stdio.h>

float simple_interest(float principle, float rate, float time);

int main()
{
	float p, r, t, result;
	
	printf("Enter the principle, rate/100 and time: ");
	scanf("%f%f%f", &p, &r ,&t);
	result = simple_interest(p,r,t);
	
	printf("Simple Interest = Ksh %.2f", result);
	
	return 0;
}

float simple_interest(float principle, float rate, float time){
	float interest;
	interest = principle * rate/100 * time;
	return interest;
}