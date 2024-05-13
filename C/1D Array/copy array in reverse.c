#include <stdio.h>
#include <conio.h>

void main(){
	int a1[100],a2[100],n,i,j=0;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input array
	for(i=0; i<n; i++){
		printf("Enter a1[%d] elements: ",i);
		scanf("%d",&a1[i]);
	}
	//display first array
	for(i=0; i<n; i++){
		printf("%d\t",a1[i]);
	}
	//copying array in reverse
	for(i=n-1; i>=0; i--){
		a2[j]=a1[i];
		j++;
	}
	//display second array
	printf("\nThe elements of second array is:\n");
	for(i=0; i<n; i++){
		printf("%d\t",a2[i]);
	}
}
