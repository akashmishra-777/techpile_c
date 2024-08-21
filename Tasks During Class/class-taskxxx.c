#include<stdio.h>
#include<conio.h>

int main(){
	char ch;
	printf("Enter the first character of your gender : ");
	ch = getchar();
	
	if(ch== 'M' || ch =='m'){
		printf("Male");
	}else if(ch == 'F' || ch =='f'){
		printf("Female");
	}else{
		printf("Invalid Input");
	}
	return 0;
}