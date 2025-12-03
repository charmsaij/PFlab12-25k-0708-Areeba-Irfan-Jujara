#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s1[20];
	char s2[20];
	printf("\nenter the first sentence:\n");
fgets(s1,sizeof(s1),stdin);
s1[strcspn(s1,"\n")]='\0';
	printf("\nenter the second sentence:\n");
	fgets(s2,sizeof(s2),stdin);
	s1[strcspn(s2,"\n")]='\0';
	int size=strlen(s1)+strlen(s2)+1;
	char*s3=(char*)malloc(size);
	if(s3==NULL){
		printf("memory allocation Failed");
		return 1;
		
	}
	strcpy(s3,s1);
	strcat(s3,s2);
	printf("%s",s3);
	return 0;
}
