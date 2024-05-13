#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char b,a[100];
	int i,pos=0;
	printf("Enter a string: ");
	gets(a);
	printf("Enter a character: ");
	scanf("%c",&b);
	for(i=0; i<strlen(a); i++){
		if(a[i]==b || a[i]==b+32 || a[i]==b-32){
			pos++;
		}
	}
	if(pos==0){
		printf("%c is not found in the string.",b);
	}
	else{
		printf("%c is found in the string at:\t",b);
		for(i=0; i<strlen(a); i++){
			if(a[i]==b || a[i]+32==b || a[i]-32==b){
				printf("%d\t",i+1);
			}
		}
	}
	
}
