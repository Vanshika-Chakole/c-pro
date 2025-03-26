#include<stdio.h>
#include<string.h>

struct collage{
    char branch[10];
    char name[50];
    int age;
    float salary;
}CSE,MECH,IT,CIVIL;

int main(){
struct collage hod[4];
struct collage *ptr;
for(int i=0;i<4;i++){

printf("Enter the details of hod : %d\n",i+1);
printf("Enter the branch :");
scanf("%s",ptr[i].branch);
printf("age:");
scanf("%d",&ptr[i].age);
printf("name:");
scanf("%s",&ptr[i].name);
printf("salary:");
scanf("%f",&ptr[i].salary);
}
printf("HOD details:");
for(int i=0;i<4;i++){
    printf("details of hod of branch :%s\n",ptr[i].branch);
    printf("name: %s\n",ptr[i].name);
     printf("age: %d\n",ptr[i].age);
    printf("salary: %f\n",ptr[i].salary);
    }
}