#include<stdio.h>
#include<conio.h>
void main(){
	char str[100];
	int i=0;
	printf("Enter a string: ");
	gets(str);
	while(str[i]!='\0'){
			i++;
	}
	printf("The length of string is %d",i);
}
