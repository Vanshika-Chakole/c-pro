#include<iostream>
using namespace std;
class student{
public:
	int id;
	string name;
	float marks;
	
	void getData()
	{
	cout<<"Enter the name: ";
	cin>>name;
	cout<<"Enter the id:";
	cin>>id;
	cout<<"Enter the marks:";
	cin>>marks;
}
void displayData(){
	cout<<"Name :"<<name<<endl;
	cout<<"ID :"<<id<<endl;
	cout<<"Marks :"<<marks<<endl;
}};
int main(){
student student[5];
for(int i=0;i<=5;i++){
cout<<"Enter the detail for students"<<i+1<<":"<<endl;
student[i].getData();
}
for(int i=0;i<=5;i++){
cout<<"Details of students are"<<i+1<<"i"<<endl;
student[i].displayData();
}
return 0;
}
