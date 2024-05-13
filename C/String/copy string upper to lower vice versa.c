#include <stdio.h>
#include <conio.h>

void main(){
	char a[100],b[100];
	int i;
	printf("Enter a string: ");
	gets(a);
	printf("\nOriginal string is %s",a);
	for(i=0; a[i]!='\0'; i++){
		if(a[i]>='A' && a[i]<='Z'){
			b[i]=a[i]+32;
		}
		else if(a[i]>='a' && a[i]<='z'){
			b[i]=a[i]-32;
		}
		else{
			b[i]=a[i];
		}
	}
	printf("\nThe converted string is %s",b);
}
