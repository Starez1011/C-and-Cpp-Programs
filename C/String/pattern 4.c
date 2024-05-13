#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char a[100];
	int i,j,k,n;
	printf("Enter a string: ");
	gets(a);
	n=strlen(a);
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			printf(" ");
		}
		for(k=0; k<n-i; k++){
			printf("%c",a[k]);
		}
		printf("\n");
	}
}
