#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],i,j,m,n;
	float sum=0,avg;
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
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//calculation
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			sum=sum+a[i][j];
		}
	}
	avg=sum/(m*n);
	printf("\nThe average is %.3f.",avg);
}
