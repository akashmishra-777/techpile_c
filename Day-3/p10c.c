#include<stdio.h>
#include<conio.h>

int main(){
	int table;
	printf("Enter a number : ");
	scanf("%d",&table);
	
	for(int i=1; i<=10; i++){
		printf("%d ",i*2);
	}
	return 0;
}