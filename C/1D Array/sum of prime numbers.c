#include <stdio.h>
#include <conio.h>

void main(){
	int a[100],i,n,j,sum=0,fact;
	printf("Enter array size: ");
	scanf("%d",&n);
	//input array
	for(i=0; i<n; i++){
		printf("Enter a[%d] elements: ",i);
		scanf("%d",&a[i]);
	}
	//display array
	for(i=0; i<n; i++){
		printf("%d\t",a[i]);
	}
	//calculation
	for(i=0; i<n; i++){
		fact=0;
		for(j=1; j<=a[i]; j++){
			if(a[i]%j==0){
				fact=fact+1;
			}
		}
		if(fact==2){
			sum=sum+a[i];
		}
	}
	printf("\nSum of prime numbers is %d.",sum);
}
