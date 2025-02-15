#include<stdio.h>

int main(){

int a[10]={2,3,4,7,20,56,86,90};
int beg, mid, end, item;
printf("Following are the element \n",a[10]);
printf("Enter searching item");
scanf("%d",&item);
if(mid=item){

printf("item is found");
}
else if(mid<beg){
mid=(beg+end)/2;
mid=mid-1;
mid=end;
printf("item is found",end);
}
else if(mid>beg){
	mid=(beg+end)/2;
	mid=mid+1;
	mid=beg;
printf("item is found",beg);	
}
else{
	printf("item is not found");
}

return 0;
}
