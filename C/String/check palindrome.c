#include <stdio.h>
#include <conio.h>

void main(){
	char a[100],b[100];
	int i=0,j,n=0,count=0;
	printf("Enter a string: ");
	gets(a);
	//finding length
	while(a[i]!='\0'){
		i++;
	}
	//copying in reverse
	for(j=i-1; j>=0; j--){
		b[j]=a[n];
		n++;
	}
	printf("\nThe reverse string is %s",b);
	//check palindrome
	for(j=0; j<i; j++){
		if(a[j]==b[j] || (a[j]+32)==b[j] || (a[j]-32)==b[j]){
			count++;
		}
	}
	if(count==i){
		printf("\n%s is palindrome",a);
	}
	else{
		printf("\n%s is not palindrome",a);
	}
}
