#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the 1st number  : ");
	scanf("%d",&a);
	
	printf("Enter the 2nd number : ");
	scanf("%d",&b);
	
	if(a>b){
		printf("%d - %d  = %d",a,b,a-b);
	}else{
		printf("%d - %d = %d",b,a,b-a);
	}
	
	return 0;
}