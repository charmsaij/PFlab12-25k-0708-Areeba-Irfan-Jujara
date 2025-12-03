#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int n,i;
	printf("enter a number:\n");
	scanf("%d",&n);
	int*use=(int*)calloc(n,sizeof(int));
	if(use==NULL){
		printf("memory allocation failed");
		return 1;
	}
	printf("Before initization of calloc\n");
	for(i=0;i<n;i++){
		printf("%d\n",use[i]);
	}
	printf("After initization of calloc\n");
	for(i=0;i<n;i++){
		printf("enter number %d:\n",i+1);
		scanf("%d",&use[i]);
	}
	free(use);
	use=(int*)malloc(n*sizeof(int));
	if(use==NULL){
		printf("memory allocation failes\n");
		return 1;
	}
	printf("\nreuse the previous pointer with malloc\n");
	for(i=0;i<n;i++){
		printf("%d\n",use[i]);
	}
	free(use);
	return 0;
}
