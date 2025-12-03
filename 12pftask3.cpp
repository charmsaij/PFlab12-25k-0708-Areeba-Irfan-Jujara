#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char studentname[20];
	int marks;
}Student;
int main(){
	int n,i;
printf("Enter the number of students in your class:");
scanf("%d",&n);

Student *record=(Student*)calloc(n,sizeof(Student));
if(record==NULL){
	printf("memory Allocation failed");
	return 1;
}
for(i=0;i<n;i++){
	printf("Enter name and marks of student %d",i+1);
	scanf("%s %d",&record[i].studentname,&record[i].marks);	
}

for(i=0;i<n;i++){
	if(record[i].marks>75){
		printf("%s has scored marks (greater than 75) %d\n",record[i].studentname,record[i].marks);
		
	}
	
	
}
free(record);

	return 0;
}
