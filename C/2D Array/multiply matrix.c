#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define N 100

void main(){
	int a[N][N],b[N][N],m1,n1,m2,n2,i,j,k;
	int sum,c[N][N];
	printf("Enter rows and columns for 1st matrix: ");
	scanf("%d%d",&m1,&n1);
	printf("Enter rows and columns for 2nd matrix: ");
	scanf("%d%d",&m2,&n2);
	if(n1!=m2){
		printf("!!!ERROR!!!Try again");
		exit(0);
	}
	//input first matrix
	for(i=0; i<m1; i++){
		for(j=0; j<n1; j++){
			printf("Enter a[%d][%d] elements: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//input second matrix
	for(i=0; i<m2; i++){
		for(j=0; j<n2; j++){
			printf("Enter b[%d][%d] elements: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//display first matrix
	printf("\nThe first matrix is:\n");
	for(i=0; i<m1; i++){
		for(j=0; j<n1; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//display second matrix
	printf("\nThe second matrix is:\n");
	for(i=0; i<m2; i++){
		for(j=0; j<n2; j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//calculation
	for(i=0; i<m1; i++){
		for(j=0; j<n2; j++){
			sum=0;
			for(k=0; k<n1; k++){
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	//display multiplication matrix
	printf("\nThe multiplied matrix is :\n");
	for(i=0; i<m1; i++){
		for(j=0; j<n2; j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
