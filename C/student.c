#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

struct DOB{
	int day;
	int month;
	int year;
};
struct Student{
	char name[50];
	int roll;
	char faculty[50];
	struct DOB db;
};

int main(){
	struct Student s[100];
	int i,n;
	FILE *fp;
	fp=fopen("student.dat","wb+");
	if(fp==NULL){
		printf("Cannot open FILE");
		exit(0);
	}
	printf("Enter no. of students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		fflush(stdin);
		printf("Enter name: ");
		gets(s[i].name);
		printf("Enter roll no. : ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("Enter faculty: ");
		gets(s[i].faculty);
		printf("Enter DOB:");
		scanf("%d%d%d",&s[i].db.day,&s[i].db.month,&s[i].db.year);
		fwrite(&s[i],sizeof(s[i]),1,fp);
	}
	rewind(fp);
	for(i=0;i<n;i++){
		fread(&s[i],sizeof(s[i]),1,fp);
		if(strcmp(s[i].faculty,"BEIT")==0){
			printf("\nName: %s",s[i].name);
			printf("\nRoll no.: %d",s[i].roll);
			printf("\nDOB:%d/%d/%d",s[i].db.day,s[i].db.month,s[i].db.year);
		}
	}
	fclose(fp);
	getch();
	return 0;
}
