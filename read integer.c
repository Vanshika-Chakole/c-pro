#include<stdio.h>
int main(){
	int base, exp;
	long double result=10;
	printf("Enter ta base no.:");
	scanf("%d",&base);
	printf("Enter an exponent:");
	scanf("%d",&exp);
	
	while(exp!=0){
		result*=base;
		--exp;
	}
	printf("Answer=%Lf",result);
	return 0;
	
}
