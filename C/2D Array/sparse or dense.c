#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],m,n,i,j,count=0;
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
	//calculation
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j]==0){
				count++;
			}
		}
	}
	if(count>(m*n)/2){
		printf("\nIt is sparse matrix.");
	}
	else{
		printf("\nIt is dense matrix.");
	}
}
