#include <stdio.h>
#include <conio.h>

void main(){
	int a[100][100],m,n,i,j,num1,num2;
	printf("Enter rows and columns: ");
	scanf("%d%d",&m,&n);
	//input array
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("Enter a[%d][%d] elements: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//display array
	printf("\nThe matrix is:\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	//calculation
	num1=a[0][0];
	num2=a[0][0];
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			if(a[i][j]>num1){
				num1=a[i][j];
			}
			if(a[i][j]<num2){
				num2=a[i][j];
			}
		}
	}
	printf("\nThe highest is %d and lowest is %d.",num1,num2);
}
