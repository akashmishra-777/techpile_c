#include<stdio.h>
#include<conio.h>

int main(){
	
	for(int i=1; i<=4; i++){
		for(int j=3; j>=i; j--){
			printf(" ");
		}
	
	printf("%d ",i);
		printf("\n");
	}
	printf("\n");
	//B
	for(int i=1; i<=5; i++){
		for(int j=1; j<=i; j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n\n");
	//c
	
	for(int i=5; i>=1; i--){
		for(int j=1; j<=i; j++){
			printf("%d ",i);
		}
	printf("\n");
	}
	
	
}