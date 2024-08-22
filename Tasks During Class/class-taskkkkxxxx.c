#include<stdio.h>

int main(){
	int n,primeTrue,elsex=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		if(n%i==0){
			if(i==1 || i==n){
				primeTrue=primeTrue+1;
			}else{
				elsex = elsex +1;
			}
		}
	}
	
	
	if(primeTrue == 2 && elsex == 0){
		printf("This is a prime number");
	}else{
		printf("This is not a prime number");
	}
	return 0;
}