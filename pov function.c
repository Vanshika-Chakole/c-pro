#include<stdio.h>
int main(){
	double base, exp, result;
	printf("Enter a base no.");
	scanf("%lf",&base);
	printf("Enter an exponent:");
	scanf("%lf",&exp);
	result=pow(base, exp);
	printf("%.1lf^%.1lf=%.2lf",base,exp,result);
	return 0;
}
