#include<stdio.h>

int main(){
	int num ;
	printf("Enter a number : ");
	scanf("%d",&num);
	
	switch(num%2){
		case 0:{
			printf("It is an even number");
			
				
			break;
		}
		default:{
			printf("It is an odd number number.");
			
			break;
		}
		
	}
	return 0;
}