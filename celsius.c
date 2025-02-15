#include<stdio.h>
int main(){
	float celsius, fahrenhite;
	printf("Enter temprature in celsius:");
	scanf("%f",&celsius);
	fahrenhite=(celsius*9/5)+32;
	printf("%2f clesius=%2ffahrenhite",celsius,fahrenhite);
	return 0;
}
