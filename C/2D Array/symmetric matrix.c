#include <stdio.h>
#include <conio.h>
#define N 100

void main(){
	int a[N][N],b[N][N],n,i,j,flag=0;
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
			b[i][j]=a[j][i];
		}
	}
	//display transpose matrix
	printf("\nThe transpose matrix is:\n");
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	//check symmetric matrix
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[i][j]==b[i][j]){
				flag++;
			}
		}
	}
	if(flag==n*n){
		printf("\nSymmetric Matrix");
	}
	else{
		printf("\nNot a Symmetric Matrix");
	}
}

