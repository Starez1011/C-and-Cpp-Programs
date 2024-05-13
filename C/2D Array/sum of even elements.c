#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],m,n,i,j,sum=0;
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
			if(a[i][j]%2==0){
				sum=sum+a[i][j];
			}
		}
	}
	printf("\nThe sum of even elements is %d.",sum);
}
