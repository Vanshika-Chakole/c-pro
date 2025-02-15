#include<stdio.h>
int main(){
	int radius;
	float pi=3.14, area, circumfrence;
	printf("Enter the radius of circle:");
	scanf("%d",&radius);
	area=pi*radius*radius;
	printf("Area of the circle is: %f",area);
	circumfrence=2*pi*radius;
	printf("Circumfrence of the circle is: %f",circumfrence);
}
