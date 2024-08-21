#include<stdio.h>

int main(){
	
	for(int i =1; i<=5; i++){
		for(int j=i; j==i; i++){
			printf("%d ",j);
		}
		printf("\n");
	}
	
return 0;
}