#include<stdio.h>
int main(){
	int intType;
	float floatType;
	char charType;
	double doubleType;
	printf("Size of int:%zu bytes\n",sizeof(intType));
		printf("Size of float:%zu bytes\n",sizeof(floatType));
			printf("Size of char:%zu bytes\n",sizeof(charType));
				printf("Size of double:%zu bytes\n",sizeof(doubleType));
				return 0;
}
