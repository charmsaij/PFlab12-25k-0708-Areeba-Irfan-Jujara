#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int i;
	printf("Enter how many numbers you want to store:");
	scanf("%d",&n);
	int*array=(int*)calloc(n,sizeof(int));
	if(array== NULL){
		printf("\nMemory allocation failed\n");
		return 1;
	}
	printf("Enter the numbers:(separated by space)");
	for(i=0;i<n;i++){

	scanf("%d",&array[i]);
	
	}
	for(i=0;i<n;i++){
		printf("%d\t",array[i]);
	}
free(array);	
return 0;	
}
