#include<stdio.h>
int main(){
	int age;
	printf("The age of the voter is:");
	scanf("%d",&age);
	if(age>=18){
		printf("Person is eligible for vote.");
	}
	else{
	printf("Person is not elegible for vote.");
    }
}
