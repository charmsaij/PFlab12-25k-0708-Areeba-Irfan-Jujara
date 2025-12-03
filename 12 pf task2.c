#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char*ptr,int s){
	int i;
	for(i=strlen(ptr)-1;i>=0;i--){
		printf("%c",ptr[i]);
	}
}
int main(){
	int size;
	printf("Enter the characters of your sentence:");
	scanf("%[^\n]",&size);
//	while (getchar() != '\n' && getchar() != EOF);
	char *string=(char*)calloc(size,sizeof(char));
	if(string==NULL){
		printf("memory allocation failed");
		return 1;
	}
	printf("Enter the sentence:");
	fgets(string,size-1,stdin);
	string[strcspn(string,'\n')]='\0';
	reverse(string,size);
	return 0;
	
}
