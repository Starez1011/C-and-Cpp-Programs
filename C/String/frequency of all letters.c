#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
	char a[100],ch;
	int i,j,count;
	printf("Enter a character: ");
	gets(a);
	for(i=0; i<strlen(a); i++){
		ch=a[i];
		count=0;
		if(ch!='0'){
			for(j=0; j<strlen(a); j++){
				if(ch==a[j] || ch==a[j]+32 || ch==a[j]-32){
					count++;
					a[j]='0';
				}
			}
			printf("\nFrequency of %c is %d",ch,count);
		}
	}
	
}
