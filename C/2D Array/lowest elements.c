#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],m,n,i,j,num;
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
	num=a[0][0];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j]<num){
				num=a[i][j];
			}
		}
	}
	printf("\nThe lowest element is %d.",num);
}
