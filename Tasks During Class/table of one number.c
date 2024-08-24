#include<stdio.h>

int main(){
	int n,count=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(n%i==0){
			count=count+1;
		}
	}
	
	
	if(count==2){
		printf("This is a prime number.");
	}else{
		printf("It is not a prime number");
	}
	return 0;
}