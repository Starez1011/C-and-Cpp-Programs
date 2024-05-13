#include <stdio.h>
#include <conio.h>

void main(){
	int A[100],i,N,psum=0,nsum=0;
	float avg,sum;
	printf("Enter array size: ");
	scanf("%d",&N);
	//input array
	for(i=0; i<N; i++){
		printf("Enter A[%d] elements: ",i);
		scanf("%d",&A[i]);
	}
	//display array
	for(i=0; i<N; i++){
		printf("%d\t",A[i]);
	}
	//calculation
	for(i=0; i<N; i++){
		if(A[i]>=0){
			psum=psum+A[i];
		}
		else{
			nsum=nsum+A[i];
		}
	}
	sum=psum+nsum;
	avg=(sum/N);
	printf("\nThe sum of positive numbers is %d",psum);
	printf("\nThe sum of negative numbers is %d",nsum);
	printf("\nThe average of given numbers is %f",avg);
	getch();
}
