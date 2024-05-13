#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char a[100];
	int i,j,k,n,b=0;
	printf("Enter rows: ");
	scanf("%d",&n);
	fflush(stdin);
	printf("Enter a string: ");
	gets(a);
	for(i=0; i<n; i++){
		for(j=n-1; j>i; j--){
			printf(" ");
		}
		for(k=0; k<=b; k++){
			printf("%c",a[k]);
		}
		b=b+2;
		printf("\n");
	}
}
