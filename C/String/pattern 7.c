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
		for(j=0; j<=i; j++){
			printf("%c",a[j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++){
		b=0;
		for(k=n-1; k>i; k--){
			printf("%c",a[b]);
			b++;
		}
		printf("\n");
	}
}
