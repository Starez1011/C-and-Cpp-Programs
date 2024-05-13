#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char a[100][100];
	int i,n;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	fflush(stdin);
	//input names
	for(i=0; i<n; i++){
		printf("Enter Name [%d]: ",i+1);
		gets(a[i]);
		}
	//display names
	printf("The name of students are:\n");
	for(i=0; i<n; i++){
		printf("%s\n",a[i]);
	}
}
