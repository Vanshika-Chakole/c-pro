#include<stdio.h>
#include<string.h>

struct employee{

    char name[50];int id;
    float salary;
};

int main(){
struct employee emp[3];
struct employee *ptr;
for(int i=0;i<3;i++){
printf("Enter the dedetails : %d\n",i+1);
printf("id:");
scanf("%d",&ptr[i].id);
printf("name:");
scanf("%s",&ptr[i].name);
printf("salary:");
scanf("%f.2f",&ptr[i].salary);
}

printf("Employee details:");
for(int i=0;i<3;i++){
    printf("Employee : %d\n",i+1);
    printf("id: %d\n",ptr[i].id);
    printf("name: %s\n",ptr[i].name);
    printf("salary: %f\n",ptr[i].salary);
    }
}