#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char a[100];
	int i,j,n;
	printf("Enter a string: ");
	gets(a);
	for(i=0; i<strlen(a); i++){
		 n=0;
		for(j=strlen(a); j>i; j--){
			printf("%c",a[n]);
			n++;
		}
		printf("\n");
	}
}
