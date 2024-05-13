#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void main(){
	char a[100][100],name[100];
	int i,n,j;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	fflush(stdin);
	//input names
	for(i=0; i<n; i++){
		printf("Enter Name [%d]: ",i+1);
		gets(a[i]);
		}
	//display names
	printf("\nThe unsorted names of students are:\n");
	for(i=0; i<n; i++){
		printf("%s\n",a[i]);
	}
	//sorting
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(strcmp(a[i],a[j])>0){
				strcpy(name,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],name);
			}
		}
	}
	//display sorted names
	printf("\nThe sorted names of students are:\n");
	for(i=0; i<n; i++){
		printf("%s\n",a[i]);
	}
}
