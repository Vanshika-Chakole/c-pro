#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter any three no.:");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b){
		printf("B is greater",b);
	}
	else if(b<c){
		printf("C is greater",c);
	}
	else (c<a)
	{
		printf("A is greater",a);
	}
}
