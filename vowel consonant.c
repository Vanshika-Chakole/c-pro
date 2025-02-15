#include<stdio.h>
int main(){
	int i,vCount=0,cCount=0;
	char str[]="Here is Vanshika";
for(i=0;i<strlen(str);i++){
	str[i]=tolower(str[i]);
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
		vCount++;
	}
	else if(str[i]>='a'&&str[i]<='z'){
		cCount++;
	}
}
printf("Number of vowels:%d\n", vCount);
printf("Number of consonant:%d\n", cCount);
return 0;
}
