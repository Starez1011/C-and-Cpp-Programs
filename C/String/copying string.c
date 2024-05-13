#include <stdio.h>
#include <conio.h>

void main(){
	char a[100],b[100];
	int i=0,j;
	printf("Enter a string: ");
	gets(a);
	//copying string
	while(a[i]!='\0'){
		b[i]=a[i];
		i++;
	}
	printf("The copied string is %s",b);
}
