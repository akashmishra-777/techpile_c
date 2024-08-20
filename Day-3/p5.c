#include<stdio.h>

int main(){
	int num; int r_num; int rem;
	printf("Enter a 2 digit number :  ");
	scanf("%d",&num);
	
	while(num != 0){
		rem = num%10;
		
		r_num = (r_num*10)+rem;
		
		num /= 10;
	}
	
	printf("%d",r_num);
	
	
	return 0;
}