#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char a[100];
	int i,j,k,n,b;
	printf("Enter rows: ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter a string: ");
	gets(a);
	b=strlen(a);
	for(i=0; i<n; i++){
		for(j=0; j<i; j++){
			printf(" ");
		}
		for(k=i; k<=b-1-i; k++){
			printf("%c",a[k]);
		}
		printf("\n");
	}
}
