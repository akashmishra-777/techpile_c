#include<stdio.h>

int main(){
	char c;
	printf("Enter a M/F : ");
	scanf("%c",&c);
	
	if(c == 'M'){
		printf("Male");
	}else if(c == 'F'){
		printf("Female");
	}else{
		printf("Transgender");
	}
}