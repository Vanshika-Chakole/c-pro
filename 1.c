#include<stdio.h>
#include<string.h>

struct s{
    char name[50];
    int a;
    float m;
};

int main(){

    struct s s1;
    struct s*ptr;
    ptr = &s1;
    
    strcpy(ptr->name,"vanshika");
    ptr-> a = 20;
    ptr->m = 720;

    printf("name: %s\n")
}