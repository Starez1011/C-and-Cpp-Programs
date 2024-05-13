#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char a[100];
	int i,j,k;
	printf("Enter a string: ");
	gets(a);
	for(i=0; i<strlen(a); i++){
		for(j=strlen(a)-1; j>i; j--){
			printf(" ");
		}
		for(k=0; k<=i; k++){
			printf("%c",a[k]);
		}
		printf("\n");
	}
}
