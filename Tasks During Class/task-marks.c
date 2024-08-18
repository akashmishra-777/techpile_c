#include<stdio.h>
#include<conio.h>


int main(){
	int hindi,english,math,science,social_science;
	printf("MM is 100\n\n");
	printf("Enter the marks of Hindi : ");
	scanf("%d",&hindi);
	
		printf("Enter the marks of English : ");
	scanf("%d",&english);
	
		printf("Enter the marks of Math : ");
	scanf("%d",&math);
	
		printf("Enter the marks of Science : ");
	scanf("%d",&science);
	
		printf("Enter the marks of Social Science : ");
	scanf("%d",&social_science);
	
	
	int total = hindi+english+science+social_science+math;
	float per = (total*100)/500;
		
	printf("Total marks : %d\n",total);
	printf("THE PERCENTAGE WILL BE : %f",per);
	return 0;
}