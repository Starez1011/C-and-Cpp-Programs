#include <stdio.h>
#include <conio.h>
#define N 100
void main(){
	int a[N][N],m,n,i,j,sum;
	printf("Enter rows and columns: ");
	scanf("%d%d",&m,&n);
	
	//input matrix
	
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Enter a[%d][%d] elements: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//display matrix
	printf("\nThe matrix is:\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	//sum of rows
	for(i=0; i<m; i++){
		sum=0;
		for(j=0; j<n; j++){
			sum=sum+a[i][j];
		}
		printf("\nThe sum of row %d is %d.",i+1,sum);
	}
	//sum of columns
	for(j=0; j<n; j++){
		sum=0;
		for(i=0; i<m; i++){
			sum=sum+a[i][j];
		}
		printf("\nThe sum of column %d is %d.",j+1,sum);
	}
}
