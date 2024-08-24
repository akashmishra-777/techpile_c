#include<stdio.h>
#include<conio.h>
int main(){
	for(int i=2; i<=10; i++){
		for(int j=1; j<=10; j++){
			printf("%d\t ",i*j);
		}
		printf("\n");
	}
	return 0;
}