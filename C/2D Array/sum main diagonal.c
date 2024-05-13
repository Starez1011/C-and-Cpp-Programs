#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],n,i,j,sum=0;
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
			if(i==j){
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nThe sum of main diagonal is %d.",sum);
}
