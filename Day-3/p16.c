#include<stdio.h>
#include<conio.h>

int main(){
	int x = 1;
	for(int i=1; i<=4; i++){
		for(int j=3; j>=i; j--){
			printf(" ");
		}
		
		for(int j=1; j<=i;j++){
			printf("%d ",x);
		
		}
	
		x++;
		printf("\n");
	}
}
