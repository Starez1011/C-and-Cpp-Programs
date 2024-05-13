#include<stdio.h>
#include<conio.h>
void main(){
	char str[100];
	int i=0,j;
	printf("Enter a string: ");
	gets(str);
	//finding length of string
	while(str[i]!='\0'){
		i++;
	}
	//display in reverse order
	for(j=i-1; j>=0; j--){
		printf("%c",str[j]);
	}
}
