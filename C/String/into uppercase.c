#include <stdio.h>
#include <conio.h>

void main(){
	char a[100];
	int i;
	printf("Enter a string: ");
	gets(a);
	printf("\nOriginal string is %s",a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]=a[i]-32;
		}
	}
	printf("\nThe converted string is %s",a);
}
