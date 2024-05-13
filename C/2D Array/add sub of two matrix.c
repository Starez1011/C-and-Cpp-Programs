#include <stdio.h>
#include <conio.h>
#define N 100

void main(){
	int a[N][N],b[N][N],n,i,j,sum[N][N],sub[N][N];
	printf("Enter size of square matrix: ");
	scanf("%d",&n);
	//input first matrix
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Enter a[%d][%d] elements: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//input second matrix
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("Enter b[%d][%d] elements: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//display first matrix
	printf("\nThe first matrix is:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//display second matrix
	printf("\nThe second matrix is:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//addition
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
				sum[i][j]=a[i][j]+b[i][j];
		}
	}
	//subtraction
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			sub[i][j]=a[i][j]-b[i][j];
		}
	}
	//display addition matrix
	printf("\nThe added matrix is :\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	//display subtraction matix
	printf("The subtracted matrix is:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t",sub[i][j]);
		}
		printf("\n");
	}
}
