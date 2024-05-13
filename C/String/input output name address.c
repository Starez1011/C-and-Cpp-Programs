#include <stdio.h>
#include <conio.h>

void main(){
	char name[100],add[100];
	printf("Enter your name: ");
	gets(name);
	printf("Enter your address: ");
	gets(add);
	printf("\nYour name is %s \nYour address is %s",name,add);
}
