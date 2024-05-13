#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char a[100];
	int i,j;
	printf("Enter a string: ");
	gets(a);
	for(i=0; i<strlen(a); i++){
		for(j=0; j<=i; j++){
			printf("%c",a[j]);
		}
		printf("\n");
	}
}
