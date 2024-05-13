#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],n,i,j;
	printf("Enter size of square matrix: ");
	scanf("%d",&n);
	//input matrix
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Enter a[%d][%d] elements: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//display matrix
	printf("\nThe matrix is:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//calculation
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(i<j){
				a[i][j]=0;
			}
		}
	}
	printf("\nThe lower triangular matrix is:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
