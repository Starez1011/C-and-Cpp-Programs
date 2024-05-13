#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],m,n,i,j,esum=0,osum=0;
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
	//sum of odd even matrix
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j]%2==0){
				esum=esum+a[i][j];
			}
			if(a[i][j]%2!=0){
				osum=osum+a[i][j];
			}
		}
	}
	printf("\nThe sum of even is %d and odd is %d.",esum,osum);
}
