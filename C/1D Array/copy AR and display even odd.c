#include <stdio.h>
#include <conio.h>

void main(){
	int AR[100],i,OAR[100],EAR[100],N,ej=0,oj=0;
	printf("Enter array size: ");
	scanf("%d",&N);
	//input array
	for(i=0; i<N; i++){
		printf("Enter AR[%d] elements: ",i);
		scanf("%d",&AR[i]);
	}
	//Display array
	for(i=0; i<N; i++){
		printf("%d\t",AR[i]);
	}
	//coping array in OAR and EAR
	for(i=0; i<N; i++){
		if(AR[i]%2==0){
			EAR[ej]=AR[i];
			ej++;
		}
		else{
			OAR[oj]=AR[i];
			oj++;
		}
	}
	//display EAR
	printf("\nEven elements are:\n");
	for(i=0; i<ej; i++){
		printf("%d\t",EAR[i]);
	}
	//display OAR
	printf("\nOdd elements are:\n");
	for(i=0; i<oj; i++){
		printf("%d\t",OAR[i]);
	}
	
}
