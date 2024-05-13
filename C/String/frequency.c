#include <stdio.h>
#include <conio.h>

void main(){
	char a[100],b;
	int i,count=0;
	printf("Enter a string: ");
	gets(a);
	printf("Enter a character: ");
	scanf("%c",&b);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]==b || a[i]+32==b || a[i]-32==b){
			count++;
		}
	}
	if(count==0){
		printf("%c is not in the string",b);
	}
	else{
		printf("Frequency of %c is %d",b,count);
	}
}
